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

}


void Button::Update(){

	//Mantem bola dentro da tela
	// 
	//Sinaliza que a bola saiu do campo

}
