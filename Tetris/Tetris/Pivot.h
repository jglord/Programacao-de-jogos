/**********************************************************************************
// Pivot (Arquivo de Cabe�alho)
// 
// Cria��o:     01 Jan 2013
// Atualiza��o: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Ponto de mudan�a de dire��o para o jogador e fantasmas
//
**********************************************************************************/

#ifndef _TETRIS_PIVOT_H_
#define _TETRIS_PIVOT_H_

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"                          // tipos espec�ficos da engine
#include "Object.h"                         // interface de Object

// ---------------------------------------------------------------------------------

class Pivot : public Object
{
public:
    bool filled = false;                    // atributo para verificar se o quadrado est� preenchido
    Pivot(float PosX, float PosY);                                // construtor
    ~Pivot();                               // destrutor

    void Update() {};                       // atualiza��o
    void Draw() {};                         // desenho

    void OnCollision(Object* obj);
};

// ---------------------------------------------------------------------------------

#endif