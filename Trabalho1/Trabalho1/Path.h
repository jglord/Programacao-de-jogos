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

#ifndef _FUTBUTTON_PATH_H_
#define _FUTBUTTON_PATH_H_

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"                      // tipos espec�ficos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites
#include "Button.h"                       // interface de Sprites


// ---------------------------------------------------------------------------------
// Constantes Globais

// estados poss�veis para o jogador

// ---------------------------------------------------------------------------------

class Path : public Object
{
private:
    Button* button = nullptr;
public:
    Path(Button * b);               // construtor
    ~Path();                          // destrutor

    inline void OnCollision(Object* obj){};      // resolu��o da colis�o
    inline void Update();                      // atualiza��o do objeto
    inline void Draw(){};                        // desenho do objeto
};

// ---------------------------------------------------------------------------------

#endif