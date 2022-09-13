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


Ball::Ball() {
    velX = 50.0f;
    velY = 50.0f;

	sprite = new Sprite("Resources/Ball.png");
	BBox(new Circle(5.0f));
	MoveTo(window->CenterX() + 40, window->CenterY() - 40);
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



}
