/**********************************************************************************
// Player (Arquivo de Cabeçalho)
// 
// Criação:     12 SET 2022
// Atualização: 12 SET 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Player do jogo FutButton
//
**********************************************************************************/

#ifndef _FUTBUTTON_PLAYER_H_
#define _FUTBUTTON_PLAYER_H_

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites
#include "Team.h"                       // interface de Sprites


// ---------------------------------------------------------------------------------
// Constantes Globais

// estados possíveis para o jogador

// ---------------------------------------------------------------------------------

class Player : public Object
{
private:
    

public:

    Player();                           // construtor
    ~Player();                          // destrutor

    void OnCollision(Object * obj);     // resolução da colisão
    void Update();                      // atualização do objeto
    void Draw();                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif