/**********************************************************************************
// Player (Arquivo de Cabe�alho)
// 
// Cria��o:     22 Dez 2012
// Atualiza��o: 18 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Player do jogo Breakout
//
**********************************************************************************/

#include "Player.h"

// ---------------------------------------------------------------------------------
Player::Player(Image * img) {
	sprite = new Sprite(img);
	velX = 5;
}

Player::~Player() {
	delete sprite;
}

void Player::Update() {

}
// ---------------------------------------------------------------------------------
