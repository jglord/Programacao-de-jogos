/**********************************************************************************
// Ball (Arquivo de Cabeçalho)
//
// Criação:     11 Set 2022
// Atualização: 11 Set 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Botao do futbutton
//
*********************************************************************************/
#ifndef _BALL_H
#define _BALL_H

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites
#include "Player.h"
#include "Team.h"

// ---------------------------------------------------------------------------------

class Ball : public Object {
private:
	Sprite* sprite = nullptr;

public:
	float velX;                         // velocidade horizontal
	float velY;                         // velocidade vertical

	Team sideCtrl;						// atributo para saber qual time está com a bola

	Ball();
	Ball(Team * t);						//construtor para criar uma bola com um jogador definido
	~Ball();

	void OnCollision(Object* obj);

	void Draw();
	void Update();
};

inline void Ball::Draw() { sprite->Draw(x, y, z); }

#endif // !_BUTTON_H
