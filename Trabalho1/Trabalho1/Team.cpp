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


Team::Team(Player player, string name)
{
    p = player;         // definido o player que ir� controlar o time
    string spriteName1 = "\"Resources/";
    string spriteName2 = name;
    string spriteName3 = ".png\"";
    string spriteName = spriteName1 + spriteName2 + spriteName3;
}



Ball::~Ball() {
    delete sprite;
}

void Ball::OnCollision(Object* obj) {

}


void Ball::Update() {

}
