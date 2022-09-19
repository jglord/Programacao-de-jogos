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
#include "Team.h"


Team::Team() {
    buttons[0] = new Button();
    buttons[1] = new Button();
    buttons[2] = new Button();
    buttons[3] = new Button();
    buttons[4] = new Button();
    buttons[5] = new Button();
    buttons[6] = new Button();
    buttons[7] = new Button();
    buttons[8] = new Button();
    buttons[9] = new Button();
    GK = new ButtonGK();
}


Team::Team(string name, Player*p) {
    buttons[0] = new Button();
    buttons[1] = new Button();
    buttons[2] = new Button();
    buttons[3] = new Button();
    buttons[4] = new Button();
    buttons[5] = new Button();
    buttons[6] = new Button();
    buttons[7] = new Button();
    buttons[8] = new Button();
    buttons[9] = new Button();
    GK = new ButtonGK();
}


Team::~Team() {
    delete buttons[10];
    delete GK;
}

void Team::OnCollision(Object* obj) {
}


void Team::Update() {
}
