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
#include "Block2.h"

Block2::Block2(int blockType) {
	
	switch (blockType) {
	case BLOCKTYPE1:
		blocks[0] = new Block(100, 100);
		blocks[1] = new Block(100, 125);
		blocks[2] = new Block(100, 150);
		blocks[3] = new Block(100, 175);
		sprite = new Sprite("Resources/bloco18.png");

		MoveTo(100, 100);
		break;
	case BLOCKTYPE2:
		break;
	case BLOCKTYPE3:
		break;
	case BLOCKTYPE4:
		break;
	case BLOCKTYPE5:
		break;
	case BLOCKTYPE6:
		break;
	default:
		break;
		// code block
	}
}

Block2::~Block2() {
	delete sprite;
}

void Block2::Update() {

}