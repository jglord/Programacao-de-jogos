/**********************************************************************************
// Food (Arquivo de Cabeçalho)
//
// Criação:     03 Jan 2013
// Atualização: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Comida do PacMan
//
**********************************************************************************/

#ifndef _BLOCK2_H_
#define _BLOCK2_H_

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
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

    void Update();                      // atualização do objeto
    void Draw();                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

inline void Block2::Draw()
{
    sprite->Draw(x, y, z);
}

// ---------------------------------------------------------------------------------

#endif