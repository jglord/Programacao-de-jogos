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
#include "Block.h"

Block::Block() {
	sprite = new Sprite("Resources/quadrado50px.png");
	BBox(new Rect(x - (sprite->Width() / 2), y - (sprite->Height() / 2), x + (sprite->Width() / 2), y + (sprite->Height() / 2)));
	MoveTo(100, 100);
}

Block::~Block() {
	delete sprite;
}

void Block::Update() {

}