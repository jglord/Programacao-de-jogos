/**********************************************************************************
// Player (Arquivo de Cabeçalho)
// 
// Criação:     22 Dez 2012
// Atualização: 18 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Player do jogo Breakout
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
