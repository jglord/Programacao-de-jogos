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

#ifndef _BLOCK_H_
#define _BLOCK_H_

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites

// ---------------------------------------------------------------------------------

class Block : public Object
{
private:
    Sprite* sprite = nullptr;          // sprite da comida

public:
    Block(int x, int y);                             // construtor
    ~Block();                            // destrutor

    void Update();                      // atualização do objeto
    void Draw();                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

inline void Block::Draw()
{
    //sprite->Draw(x, y, z);
}

// ---------------------------------------------------------------------------------

#endif