/**********************************************************************************
// Player (Arquivo de Cabeçalho)
//
// Criação:     12 SET 2022
// Atualização: 12 SET 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Times do Futbutton//
**********************************************************************************/

#ifndef _FUTBUTTON_TEAM_H_
#define _FUTBUTTON_TEAM_H_

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites
#include "Button.h"
#include "ButtonGK.h"
#include "Player.h"
// ---------------------------------------------------------------------------------
// Constantes Globais

enum PLAYER_STATE {ATTACKING, DEFEDING};

// ---------------------------------------------------------------------------------

class Team : public Object
{
private:
    Button * teamButtons[10];

public:

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