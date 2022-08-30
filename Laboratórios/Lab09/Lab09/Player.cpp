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
	velX = 0;
}

Player::~Player() {
	delete sprite;
}

void Player::Update() {

	// Move player para Direita
	if (window->KeyDown(VK_RIGHT)) {
		velX = 500;
		Translate((velX * gameTime), 0);
	}
	// --------------------------------------
	// Move player para esquerda
	if (window->KeyDown(VK_LEFT)) {
		velX = 500;
		Translate(-(velX * gameTime), 0);
	}

	// Mantem player na tela
	if (x + sprite->Width() > window->Width())
		MoveTo(window->Width() - sprite->Width(), y);
	if (x < 0)
		MoveTo(0, y);
}
// ---------------------------------------------------------------------------------
