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
#include "Block.h"

Block::Block(int x, int y) {
	sprite = new Sprite("Resources/quadrado50px.png");
	BBox(new Rect(x - (sprite->Width() / 2) / 2, y - (sprite->Height() / 2) * 2, x + (sprite->Width() / 2) / 2, y + (sprite->Height() / 2)));
	//MoveTo(x, y);
}

Block::~Block() {
	delete sprite;
}

void Block::Update() {

}