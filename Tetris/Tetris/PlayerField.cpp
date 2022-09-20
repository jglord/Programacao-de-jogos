/**********************************************************************************
// Food (Arquivo de Cabe�alho)
//
// Cria��o:     03 Jan 2013
// Atualiza��o: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Comida do PacMan
//
**********************************************************************************/

// ---------------------------------------------------------------------------------
// Inclus�es
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