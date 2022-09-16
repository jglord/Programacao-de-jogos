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
// Constantes Globais

// Estados possiveis da bola
enum BALLSATE{MOVING, STOPED, OFFBOARD, ONBOARD};


// ---------------------------------------------------------------------------------

class Ball : public Object {
private:

	Sprite* sprite = nullptr;

public:

	float velX;                         // velocidade horizontal
	float velY;                         // velocidade vertical
	Team * sideCtrl;					// atributo para saber qual time está com a bola
	uint ballState;						// atributo para controlar o estado em que a bola está

	Ball();
	//---------------------------------------------------------------------------------------------------------------------------------------------
	//ESSE CONSTRUTOR É REALMENTE NECESSÁRIO?
	//---------------------------------------------------------------------------------------------------------------------------------------------
	//SE A BOLA PERTENCE A ALGUM JOGADOR, OBRIGATORIAMENTE ELA TEM QUE ESTÁ EM UM ESTADO, PARA O QUE SERVERIA UM CONSTRUTOR SOMENTE COM TIME?
	
	/*Ball(Team* t);						//construtor para criar uma bola com um jogador definido*/
	
	//---------------------------------------------------------------------------------------------------------------------------------------------
	Ball(Team * t, uint state);			// construtor para criar uma bola com um jogador definido e o estado em que a bola está
	~Ball();

	void OnCollision(Object* obj);

	void Draw();
	void Update();
};

inline void Ball::Draw() { sprite->Draw(x, y, z); }

#endif // !_BUTTON_H
