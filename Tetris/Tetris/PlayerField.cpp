/**********************************************************************************
// Food (Arquivo de Cabeçalho)
//
// Criação:     03 Jan 2013
// Atualização: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Comida do PacMan
//
**********************************************************************************/

// ---------------------------------------------------------------------------------
// Inclusões
#include "PlayerField.h"



Playerfield::Playerfield() {
	sprite = new Sprite("Resources/PlayerfieldBlue.png");
	MoveTo(float(window->CenterX()), float(window->CenterY()), Layer::LOWER);
	}

Playerfield::~Playerfield() {
	delete sprite;
}

void Playerfield::Update() {

}