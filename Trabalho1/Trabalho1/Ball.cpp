/**********************************************************************************
// Bola (Código Fonte)
//
// Criação:     12 Set 2022
// Atualização: 12 Set 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Bola do jogo Futbutton
//
**********************************************************************************/

#include "FutButton.h"
#include "Ball.h"
#include "Player.h"
#include "Team.h"

//--------------------------------------------------------------------------------------------------------------------
// CONSTRUTOR PADRÃO
Ball::Ball() {
    velX = 0;
    velY = 0;

	sprite = new Sprite("Resources/Ball.png");
	BBox(new Circle(5.0f));
	MoveTo(window->CenterX() + 40, window->CenterY() - 40);
}

// CONSTRUTOR COM TEAM E STATE
Ball::Ball(Team *t, uint state) {
    velX = 0;  
    velY = 0;

    sprite = new Sprite("Resources/Ball.png");                      // Carrega a sprite da bola
    BBox(new Circle(5.0f));                                      // Define a bound box da bola
    MoveTo(window->CenterX() + 40, window->CenterY() - 40);   // Posiciona a bola
    ballState = state;                                             // Define o estado da bola
    sideCtrl = t;                                                  // define o time que está com a bola
}

Ball::~Ball() {
    delete sprite;
}

void Ball::OnCollision(Object* obj) {

}


void Ball::Update() {
    

    Translate(velX * gameTime, velY * gameTime);

	//Mantem bola dentro da tela
    // mantém a bola dentro da tela (tam. da bola: 12x12)
    if (x < 0)
    {
        MoveTo(0.0f, y);
        velX = -velX;
    }
    if (x + sprite->Width() > window->Width())
    {
        MoveTo(float(window->Width() - sprite->Width()), y);
        velX = -velX;
    }
    if (y < 0)
    {
        MoveTo(x, 0.0f);
        velY = -velY;
    }
    if (y + sprite->Height() > window->Height())
    {
        MoveTo(x, float(window->Height() - sprite->Height()));
        velY = -velY;
    }



	//Sinaliza que a bola saiu do campo
    if


}
