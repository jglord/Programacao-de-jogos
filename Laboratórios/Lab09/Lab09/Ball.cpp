/**********************************************************************************
// Ball (Arquivo de Cabe�alho)
// 
// Cria��o:     22 Dez 2012
// Atualiza��o: 18 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Bola do jogo Breakout
//
**********************************************************************************/

#include "Ball.h"

// ---------------------------------------------------------------------------------

Ball::Ball(Image * img) {
	sprite = new Sprite(img);
	velX = 0;
	velY = 0;
}

Ball::~Ball() {
	delete sprite;
}

void Ball::Update() {

	// Joga a bola
	if (window->KeyDown(VK_SPACE)) {
		velX = 300;
		velY = 500;

	}
		y -= velY * gameTime;
		x += velX * gameTime;

	// ---------------------------------------------------------------------------------
	// Mantem bola dentro da tela
	if (y < 0)
		velY = -velY;
	if (y > 540 - sprite->Height())
		velY = -velY;
	if (x < 0)
		velX = -velX;
	if (x > 960 - sprite->Width())
		velX = -velX;
}
// ---------------------------------------------------------------------------------
