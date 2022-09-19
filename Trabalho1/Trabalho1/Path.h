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

#ifndef _FUTBUTTON_PATH_H_
#define _FUTBUTTON_PATH_H_

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites
#include "Button.h"                       // interface de Sprites


// ---------------------------------------------------------------------------------
// Constantes Globais

// estados possíveis para o jogador

// ---------------------------------------------------------------------------------

class Path : public Object
{
private:
    Button* button = nullptr;
public:
    Path(Button * b);               // construtor
    ~Path();                          // destrutor

    inline void OnCollision(Object* obj){};      // resolução da colisão
    inline void Update();                      // atualização do objeto
    inline void Draw(){};                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif