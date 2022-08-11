/**********************************************************************************
// Lab04-02
// 
// Cria��o:     19 Ago 2011
// Atualiza��o: 09 Ago 2022
// Compilador:  Visual C++ 2019
//
// Descri��o: Esqueleto de um la�o de tempo real para criar um jogo.
//
**********************************************************************************/

#include <windows.h>        // inclui fun��es do windows
#include <windowsx.h>       // inclui fun��es extras do windows
#include "Resources.h"      // defini��es dos recursos utilizados
#include <random>

using namespace std;

// prot�tipo do procedimento da janela
LRESULT CALLBACK WinProc (HWND, UINT, WPARAM, LPARAM);
void bitmapMoving();
void testCollision(int posX, int posY);

// -----------------------------------------------------------------------
// constantes, vari�veis e fun��es globais

int windowWidth  = 960;     // largura da janela
int windowHeight = 540;     // altura da janela
bool fullScreen = false;    // tela cheia ou modo janela

bool vkKeys[256] = { 0 };   // estado das teclas do teclado
HWND hwnd;                  // identificador da janela
HDC hdc;
HDC hdcImg;

// variaveis de velocidade
int velX = 5;
int velY = 5;

// variaveis para desenhar pixeis
int posX = 0;
int posY = 0;

// vari�veis
HBITMAP image;
BITMAP bm;


// -----------------------------------------------------------------------
// fun��es do jogo

// Gerando numero randomico
int randInt() {
	
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(0, 960);
	
	return dist(mt);
}

int randIntColor() {

	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(0, 255);

	return dist(mt);
}

// inicializa o jogo alocando recursos
void GameInit()
{
	hdc = GetDC(hwnd);

	// carrega a imagem bitmap
	image = (HBITMAP)LoadImage(
		NULL, // nulo para bitmaps
		"Resources\\CarKara.bmp", // localiza��o
		IMAGE_BITMAP, // tipo do recurso
		0, // largura da imagem
		0, // altura da imagem
		LR_LOADFROMFILE);

	GetObject(image, sizeof(BITMAP), &bm);

	hdcImg = CreateCompatibleDC(hdc);
	SelectObject(hdcImg, image);
}

// atualiza a l�gica do jogo
void GameUpdate()
{
	posX = posX + velX;
	posY = posY + velY;

	testCollision(posX, posY);
    // sai com o pressionamento da tecla ESC
    if (vkKeys[VK_ESCAPE])
        PostMessage(hwnd, WM_DESTROY, 0, 0);
}

// desenha o pr�ximo quadro do jogo
void GameDraw()
{	
	// limpa a �rea cliente
	RECT rect;
	GetClientRect(hwnd, &rect);
	FillRect(hdc, &rect, CreateSolidBrush(RGB(0, 0, 0)));

	// desenha o bitmap
	bitmapMoving();
}


// finaliza o jogo desalocando recursos
void GameFinalize()
{	
	// apaga o contexto do dispositivo e o bitmap
	DeleteDC(hdcImg);
	DeleteObject((HBITMAP)image);
	ReleaseDC(hwnd, hdc);
}

// -----------------------------------------------------------------------

// programa principal
int APIENTRY WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
    MSG			msg;
    WNDCLASS	wndclass; 

    // definindo uma classe de janela chamada "GameWindow" 
    wndclass.style         = CS_HREDRAW | CS_VREDRAW;
    wndclass.lpfnWndProc   = WinProc;
    wndclass.cbClsExtra    = 0;
    wndclass.cbWndExtra    = 0;
    wndclass.hInstance     = hInstance;
    wndclass.hIcon         = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON));
    wndclass.hCursor       = LoadCursor(hInstance, MAKEINTRESOURCE(IDC_CURSOR));
    wndclass.hbrBackground = (HBRUSH) GetStockObject (BLACK_BRUSH);
    wndclass.lpszMenuName  = NULL;
    wndclass.lpszClassName = "GameWindow";

    // registrando "GameWindow"
    if (!RegisterClass (&wndclass))
    {
         MessageBox (NULL, "Erro na cria��o da janela!", "Game", MB_ICONERROR);
         return 0 ;
    }

    int windowStyle = WS_OVERLAPPED | WS_SYSMENU;

    // tela cheia ou janela
    if (fullScreen)
    {
        windowWidth  = GetSystemMetrics(SM_CXSCREEN);
        windowHeight = GetSystemMetrics(SM_CYSCREEN);
        windowStyle  = WS_POPUP;
    }

    // criando uma janela baseada na classe "GameWindow"
    // � necess�rio usar CreateWindowEx para usar AdjustWindowRectEx
    hwnd = CreateWindowEx(
            NULL,                           // estilos extras
            "GameWindow",                   // nome da "window class"
            "Game",                         // t�tulo da janela
            windowStyle,                    // estilo da janela
            CW_USEDEFAULT,                  // posi��o x inicial
            CW_USEDEFAULT,                  // posi��o y inicial
            windowWidth,                    // largura da janela
            windowHeight,                   // altura da janela
            NULL,                           // identificador do objeto pai
            NULL,                           // identificador do menu
            hInstance,                      // identificador da aplica��o
            NULL);                          // par�metros de cria��o

    if (!fullScreen)
    {
        // ret�ngulo com o tamanho da �rea cliente desejada
        RECT winRect = {0, 0, windowWidth, windowHeight};

        // ajuste do tamanho da janela
        AdjustWindowRectEx(&winRect,
                           GetWindowStyle(hwnd),
                           GetMenu(hwnd) != NULL,
                           GetWindowExStyle(hwnd));

        // atualiza posi��o da janela
        int windowPosX = (GetSystemMetrics(SM_CXSCREEN)/2) - ((winRect.right - winRect.left)/2);
        int windowPosY = (GetSystemMetrics(SM_CYSCREEN)/2) - ((winRect.bottom - winRect.top)/2);

        // redimensiona janela com uma chamada a MoveWindow
        MoveWindow(
            hwnd,                           // identificador da janela
            windowPosX,                     // posi��o x
            windowPosY,                     // posi��o y
            winRect.right - winRect.left,   // largura
            winRect.bottom - winRect.top,   // altura
            TRUE);                          // repintar
    }

    // mostra e atualiza a janela
    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    GameInit();
     
    // loop principal do jogo
    do
    {
        if (PeekMessage(&msg,NULL,0,0,PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        } 
        else 
        {
            GameUpdate();
            GameDraw();
			Sleep(1);
        }
    } 
    while (msg.message != WM_QUIT);

    GameFinalize();

    // fim do programa
    return int(msg.wParam);
}

// -----------------------------------------------------------------------

// procedimento da janela
LRESULT CALLBACK WinProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{ 
    switch (message)
    {
        // processa teclas pressionadas
    case WM_KEYDOWN:
        vkKeys[wParam] = true;
        return 0;

        // processa teclas liberadas
    case WM_KEYUP:
        vkKeys[wParam] = false;
        return 0;
        
        // janela foi fechada
    case WM_DESTROY:
        PostQuitMessage (0);
        return 0;
    }

    return DefWindowProc(hwnd, message, wParam, lParam);
}

// -----------------------------------------------------------------------

void bitmapMoving() {
	BitBlt(hdc, posX, posY, bm.bmWidth, bm.bmHeight, hdcImg, 0, 0, SRCCOPY);
}

void testCollision(int posX, int posY) {
	if (posX + bm.bmWidth > windowWidth)
		velX = -velX;
	if (posY + bm.bmHeight > windowHeight)
		velY = -velY;

	if (posX < 0)
		velX = -velX;
	if (posY < 0)
		velY = -velY;
	
}

// -----------------------------------------------------------------------
