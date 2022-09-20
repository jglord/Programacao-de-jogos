/**********************************************************************************
// Pivot (Arquivo de Cabeçalho)
// 
// Criação:     01 Jan 2013
// Atualização: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Ponto de mudança de direção para o jogador e fantasmas
//
**********************************************************************************/

#ifndef _TETRIS_PIVOT_H_
#define _TETRIS_PIVOT_H_

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                          // tipos específicos da engine
#include "Object.h"                         // interface de Object

// ---------------------------------------------------------------------------------

class Pivot : public Object
{
public:
    bool filled = false;                    // atributo para verificar se o quadrado está preenchido
    Pivot(float PosX, float PosY);                                // construtor
    ~Pivot();                               // destrutor

    void Update() {};                       // atualização
    void Draw() {};                         // desenho

    void OnCollision(Object* obj);
};

// ---------------------------------------------------------------------------------

#endif