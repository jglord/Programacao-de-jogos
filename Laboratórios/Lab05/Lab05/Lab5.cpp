/**********************************************************************************
// Lab 05
//
// Criação:     11 Ago 2022
// Atualização: 
// Compilador:  Visual C++ 2019
//
// Descrição:   Resolução do lab 05.
//              
//              
//
**********************************************************************************/

#include "Resources.h"
#include "Engine.h"
#include "Game.h"

class Lab5 : public Game {
private:
	int posX1, posX2;
	int posY1, posY2;
	int velX1, velY1;
	int velX2, velY2;
	HDC hdc;
public:
	void Init();
	void Update();
	void Draw();
	void Finalize();
	void Collision();
};

void Lab5::Init() {
	hdc = GetDC(window->Id()); // Recuperando contexto do dispositivo

	posX1 = 5;
	posY1 = 5;

	posX2 = 50;
	posY2 = 50;

	velX1 = 2;
	velY1 = 2;

	velX2 = 5;
	velY2 = 5;
}

void Lab5::Update() {
	posX1 += velX1;
	posY1 += velY1;

	posX2 += velX2;
	posY2 += velY2;

	Collision();

	// movendo ponteiro para posical inicial da linha
	MoveToEx(hdc, posX1, posY1, NULL);
}


void Lab5::Draw() {
	LineTo(hdc, posX2, posY2);
}

void Lab5::Finalize() {
	ReleaseDC(window->Id(), hdc);
}

void Lab5::Collision() {
	if (posX1 > window->Width())
		velX1 = -velX1;
	if (posY1 > window->Height())
		velY1 = -velY1;
	if (posX1 < 0)
		velX1 = -velX1;
	if (posY1 < 0)
		velY1 = -velY1;

	if (posX2 > window->Width())
		velX2 = -velX2;
	if (posY2 > window->Height())
		velY2 = -velY2;
	if (posX2 < 0)
		velX2 = -velX2;
	if (posY2 < 0)
		velY2 = -velY2;
}

// ------------------------------------------------------------------------------
//                                  WinMain                                      
// ------------------------------------------------------------------------------

int APIENTRY WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	// cria motor e configura a janela
	Engine* engine = new Engine();
	engine->window->Mode(WINDOWED);
	engine->window->Size(960, 540);
	engine->window->Color(240, 240, 140);
	engine->window->Title("Window Game");
	engine->window->Icon(IDI_ICON);
	engine->window->Cursor(IDC_CURSOR);

	// cria e inicia o jogo
	engine->Start(new Lab5());
}

// ----------------------------------------------------------------------------