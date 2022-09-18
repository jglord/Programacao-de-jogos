/**********************************************************************************
// ButtonGK (Código Fonte)
//
// Criação:     15 Set 2022
// Atualização: 15 Set 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Botao goleiro do jogo Futbutton
//
**********************************************************************************/

#include "FutButton.h"
#include "ButtonGK.h"
#include "Player.h"


ButtonGK::ButtonGK() {
	sprite = new Sprite("Resources/buttonBrasil.png");
	BBox(new Circle(21.5f));
	MoveTo(window->CenterX(), window->CenterY());
}

ButtonGK::~ButtonGK() {
	delete sprite;
}

void ButtonGK::OnCollision(Object* obj) {

}


void ButtonGK::Update() {

	//Mantem bola dentro da tela
	// 
	//Sinaliza que a bola saiu do campo

}
