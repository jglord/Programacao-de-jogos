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
#include <sstream>
using std::stringstream;


class Lab5 : public Game {

private:
	int posX1, posX2;
	int posY1, posY2;
	int velX;
	int velY;
	HDC hdc;
public:
	void Init();
	void Update();
	void Draw();
	void Finalize();

};

void Lab5::Init() {
	hdc = GetDC(window->Id());

	posX1 = 5;
	posY1 = 5;

	posX2 = 50;
	posY2 = 50;
	velX = 5;
	velY = 5;

}

void Lab5::Update() {
	posX1 += velX;
	posY1 += velY;

	posX2 += velX;
	posY2 += velY;

	if (posX1 && posX2 > window->Height()) {
		velX = -velX;
		velY = -velY;
	}

	if (posY1 && posY2 > window->Width()) {
		velX = -velX;
		velY = -velY;
	}


	if (posY1 && posY2 > 0) {
		velX = -velX;
		velY = -velY;
	}

	if (posX1 && posX2 > window->Height()) {
		velX = -velX;
		velY = -velY;
	}

	// movendo ponteiro para posical inicial da linha
	MoveToEx(hdc, posX1, posY1, NULL);
}


void Lab5::Draw() {
	LineTo(hdc, posX2, posY2);
}

void Lab5::Finalize() {
	ReleaseDC(window->Id(), hdc);
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