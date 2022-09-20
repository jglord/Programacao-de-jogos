/**********************************************************************************
// Player (Arquivo de Cabe�alho)
// 
// Cria��o:     12 SET 2022
// Atualiza��o: 12 SET 2022
// Compilador:  Visual C++ 2022
//
// Descri��o:   Player do jogo FutButton
//
**********************************************************************************/

#ifndef _FUTBUTTON_PLAYER_H_
#define _FUTBUTTON_PLAYER_H_

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"                      // tipos espec�ficos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites
#include "Team.h"                       // interface de Sprites


// ---------------------------------------------------------------------------------
// Constantes Globais

// estados poss�veis para o jogador

// ---------------------------------------------------------------------------------

class Player : public Object
{
private:
    

public:

    Player();                           // construtor
    ~Player();                          // destrutor

    void OnCollision(Object * obj);     // resolu��o da colis�o
    void Update();                      // atualiza��o do objeto
    void Draw();                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif