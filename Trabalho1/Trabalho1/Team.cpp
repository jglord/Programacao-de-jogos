/**********************************************************************************
// Time (Código Fonte)
//
// Criação:     13 Set 2022
// Atualização: 13 Set 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Time de futebol de botão
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
