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


Team::Team(string name) {
    n = name;

    string init = "\"Resources/";
    string init2 = ".png\"";
    string final = init + name + init2;

    buttons[0] = new Button(final);
    buttons[1] = new Button(final);
    buttons[2] = new Button(final);
    buttons[3] = new Button(final);
    buttons[4] = new Button(final);
    buttons[5] = new Button(final);
    buttons[6] = new Button(final);
    buttons[7] = new Button(final);
    buttons[8] = new Button(final);
    buttons[9] = new Button(final);
    GK = new ButtonGK(final);    
}


Team::~Team() {
    delete buttons[10];
    delete GK;
}

void Team::OnCollision(Object* obj) {
}


void Team::Update() {
}
