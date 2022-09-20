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
	Mixed * mixed = new Mixed();
	
	sprite = new Sprite("Resources/PlayerfieldBlue.png");

	MoveTo(float(window->CenterX()), float(window->CenterY()), Layer::LOWER);

	Line* line1 = new Line(110, 36, 366, 36);
	line1->MoveTo(117, 600);
	mixed->Insert(line1);
	BBox(mixed);
	}

Playerfield::~Playerfield() {
	delete sprite;
}

void Playerfield::Update() {

}