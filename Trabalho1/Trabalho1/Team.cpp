/**********************************************************************************
// Time (C�digo Fonte)
//
// Cria��o:     13 Set 2022
// Atualiza��o: 13 Set 2022
// Compilador:  Visual C++ 2022
//
// Descri��o:   Time de futebol de bot�o
//
**********************************************************************************/

#include "FutButton.h"
#include "Player.h"
#include "Team.h"
#include "Button.h"
#include "Ball.h"


Team::Team()
{

}



Ball::~Ball() {
    delete sprite;
}

void Ball::OnCollision(Object* obj) {

}


void Ball::Update() {

}
