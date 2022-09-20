/**********************************************************************************
// Food (Arquivo de Cabe�alho)
//
// Cria��o:     03 Jan 2013
// Atualiza��o: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Comida do PacMan
//
**********************************************************************************/

#ifndef _BLOCK2_H_
#define _BLOCK2_H_

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"                      // tipos espec�ficos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites
#include "Block.h"                     // interface de Sprites


// ---------------------------------------------------------------------------------
enum typesblock { BLOCKTYPE1, BLOCKTYPE2, BLOCKTYPE3, BLOCKTYPE4, BLOCKTYPE5, BLOCKTYPE6 };

class Block2 : public Object
{
private:
    Sprite* sprite = nullptr;          // sprite da comida

public:
    Block2(Block * blocks[4], int blockType);                             // construtor
    ~Block2();                            // destrutor

    void Update();                      // atualiza��o do objeto
    void Draw();                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

inline void Block2::Draw()
{
    sprite->Draw(x, y, z);
}

// ---------------------------------------------------------------------------------

#endif