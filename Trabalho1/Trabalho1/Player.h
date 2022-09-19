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
enum PLAYERSTATE {SELECT, KICK, STOPED, PLAYING};    

// ---------------------------------------------------------------------------------

class Player : public Object
{
private:
    Team* t = nullptr;

public:
    uint state;

    bool ctrlKeyESC = false;            // controle do ESC
    bool ctrlSpace = false;             // controle do space
    bool ctrlKeyB = false;              // controle da tecla B
    bool ctrlLMouse = false;

    Player();                           // construtor
    Player(Team* team);
    ~Player();                          // destrutor

    void OnCollision(Object * obj);     // resolu��o da colis�o
    void Update();                      // atualiza��o do objeto
    void Draw();                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif