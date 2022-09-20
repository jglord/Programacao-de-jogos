/**********************************************************************************
// Button (Código Fonte)
//
// Criação:     11 Set 2022
// Atualização: 11 Set 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Botao do jogo Futbutton
//
**********************************************************************************/

#include "FutButton.h"
#include "Button.h"
#include "Player.h"


Button::Button(){
	sprite = new Sprite("Resources/buttonBrasil.png");
	BBox(new Circle(21.5f));
	MoveTo(window->CenterX(), window->CenterY());
}

Button::~Button() {
	delete sprite;
}

void Button::OnCollision(Object* obj) {
	obj->Translate(5, 0);
}


void Button::Update() {
	if (window->KeyDown(VK_LBUTTON)) {
		ctrlLeft = true;
		if ((window->MouseX() > X() || window->MouseX() < X()) && (window->MouseY() > Y() || window->MouseY() < Y())) {
			MoveTo(window->MouseX(), window->MouseY());
		}
	}
	if (window->KeyUp(VK_LBUTTON))
		ctrlLeft = false;
}
