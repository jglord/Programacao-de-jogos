/**********************************************************************************
// Player (Arquivo de Cabe�alho)
//
// Cria��o:     12 SET 2022
// Atualiza��o: 12 SET 2022
// Compilador:  Visual C++ 2022
//
// Descri��o:   Times do Futbutton//
**********************************************************************************/

#ifndef _FUTBUTTON_TEAM_H_
#define _FUTBUTTON_TEAM_H_

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"                      // tipos espec�ficos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites
#include "Button.h"
#include "ButtonGK.h"
#include "Player.h"
// ---------------------------------------------------------------------------------
// Constantes Globais

enum PLAYER_STATE { ATTACKING, DEFEDING };

// ---------------------------------------------------------------------------------

class Team : public Object
{
private:
    Button* teamButtons[11];

public:
    string name;

    Team(string buttonFileName);
    ~Team();

    void OnCollision(Object* obj);
    void organizeTeamInCamp(Point* buttonsPositions[11]);

    void Update();
    void Draw();

};

// ---------------------------------------------------------------------------------
//
#endif