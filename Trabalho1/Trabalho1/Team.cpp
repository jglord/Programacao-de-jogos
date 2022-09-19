/**********************************************************************************
// Bola (C�digo Fonte)
//
// Cria��o:     12 Set 2022
// Atualiza��o: 12 Set 2022
// Compilador:  Visual C++ 2022
//
// Descri��o:   Bola do jogo Futbutton
//
**********************************************************************************/

#include "FutButton.h"
#include "Team.h"

Team::Team(string buttonFileName) {
    for (int i = 0; i < 10; i++) {
        teamButtons[i] = new Button(buttonFileName);
    }
}


void Team::organizeTeamInCamp(Point* buttonsPositions[11]) {
    float j = 0;
    for (int i = 0; i < 10; i++) {
        teamButtons[i]->MoveTo(buttonsPositions[i]->X(), buttonsPositions[i]->Y());
        j += 10;
    }
}


Team::~Team() {

}

void Team::OnCollision(Object* obj) {
}


void Team::Update() {
}


void Team::Draw() {
    for (int i = 0; i < 10; i++) {
        teamButtons[i]->Draw();
    }
}