/**********************************************************************************
// Player (Arquivo de Cabeçalho)
// 
// Criação:     01 Jan 2013
// Atualização: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Player do jogo PacMan
//
**********************************************************************************/

#ifndef _PACMAN_PLAYER_H_
#define _PACMAN_PLAYER_H_

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites

// ---------------------------------------------------------------------------------
// Constantes Globais

// estados possíveis para o jogador
enum PLAYERSTATE {STOPED, UP, DOWN, LEFT, RIGHT};    

// ---------------------------------------------------------------------------------

class Player : public Object
{
private:
    

public:

    Player();                           // construtor
    ~Player();                          // destrutor
                      // muda direção para direita

    void OnCollision(Object * obj);     // resolução da colisão
    
    void Update();                      // atualização do objeto
    void Draw();                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif