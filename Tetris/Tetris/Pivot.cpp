/**********************************************************************************
// Pivot (Código Fonte)
// 
// Criação:     01 Jan 2013
// Atualização: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Ponto de mudança de direção para o jogador e fantasmas
//
**********************************************************************************/

#include "Tetris.h"
#include "Pivot.h"

// ---------------------------------------------------------------------------------

Pivot::Pivot(float PosX, float PosY)
{
    BBox(new Rect(-4, -4, 4, 4));
    type = PIVOT;
    MoveTo(PosX, PosY);
}

// ---------------------------------------------------------------------------------

Pivot::~Pivot()
{
}

void Pivot::OnCollision(Object* obj)
{
    if (obj->Type() == BLOCK) {
        filled = true;
    };
}

// ---------------------------------------------------------------------------------

