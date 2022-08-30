/**********************************************************************************
// Ball (Arquivo de Cabe�alho)
// 
// Cria��o:     22 Dez 2012
// Atualiza��o: 27 Ago 2022
// Compilador:  Visual C++ 2022
//
// Descri��o:   Bola do jogo Breakout
//
**********************************************************************************/

#ifndef _BREAKOUT_BALL_H_
#define _BREAKOUT_BALL_H_

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"            // tipos espec�ficos da engine
#include "Object.h"            // interface de Object
#include "Sprite.h"            // interface de Sprites
#include "Player.h"            // jogador do Breakout

// ---------------------------------------------------------------------------------

class Ball : public Object
{
private:
	Sprite * sprite;
	int velX;
	int velY;
	bool ctrlSpace;
public:

	Ball(Image * img);
	~Ball();

	void Update();
	void Draw();
};
// ---------------------------------------------------------------------------------
inline void Ball::Draw() { sprite->Draw(x, y, z); }

// ---------------------------------------------------------------------------------

#endif