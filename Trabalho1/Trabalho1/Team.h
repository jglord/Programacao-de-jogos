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



// ---------------------------------------------------------------------------------

class Team : public Object
{
private:
    Sprite* sprite = nullptr;

public:
    string name;
    Button buttons[10];
    ButtonGK buttonGK;
    Player  p;



    Team(Player player, string name);         // Construtor com 11 butões do time
    ~Team();                                    // destrutor


    void OnCollision(Object* obj);              // resolução da colisão

    void Update();                              // atualização do objeto
    void Draw();                                // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif