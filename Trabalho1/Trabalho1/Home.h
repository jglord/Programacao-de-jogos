/**********************************************************************************
// Home (Arquivo de Cabe�alho)
// 
// Cria��o:     18 Jan 2013
// Atualiza��o: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Tela de abertura do jogo PacMan
//
**********************************************************************************/

#ifndef _HOME_H_
#define _HOME_H_

// ------------------------------------------------------------------------------
// Inclus�es

#include "Game.h"
#include "Camp.h"
#include "Sprite.h"
#include "Scene.h"


// ------------------------------------------------------------------------------

class Home : public Game
{
private:
    Sprite * backg = nullptr;       // pano de fundo
    bool ctrlKeyESC = false;        // controle do ESC

    Scene * scene = nullptr;       // gerenciador de cena

    Camp * camp = nullptr;
    
    bool viewBBox = false;          // habilita visualiza��o da bounding box
    bool ctrlKeyB = false;          // controle da tecla B
public:
    void Init();                    // inicializa��o
    void Update();                  // atualiza��o
    void Draw();                    // desenho
    void Finalize();                // finaliza��o
};

// -----------------------------------------------------------------------------

#endif