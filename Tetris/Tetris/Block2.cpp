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
#include "Block2.h"

Block2::Block2(Block * blocks[4], int blockType) {
	switch (blockType) {
	case BLOCKTYPE1:
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

	}
}

Block2::~Block2() {
	delete sprite;
}

void Block2::Update() {

}