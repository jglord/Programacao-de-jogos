/**********************************************************************************
// Pivot (C�digo Fonte)
// 
// Cria��o:     01 Jan 2013
// Atualiza��o: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Ponto de mudan�a de dire��o para o jogador e fantasmas
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

