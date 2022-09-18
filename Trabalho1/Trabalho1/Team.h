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



    Team(Player player, string name);         // Construtor com 11 but�es do time
    ~Team();                                    // destrutor


    void OnCollision(Object* obj);              // resolu��o da colis�o

    void Update();                              // atualiza��o do objeto
    void Draw();                                // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif