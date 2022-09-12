/**********************************************************************************
// Home (Arquivo de Cabeçalho)
// 
// Criação:     18 Jan 2013
// Atualização: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Tela de abertura do jogo PacMan
//
**********************************************************************************/

#ifndef _HOME_H_
#define _HOME_H_

// ------------------------------------------------------------------------------
// Inclusões

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
    
    bool viewBBox = false;          // habilita visualização da bounding box
    bool ctrlKeyB = false;          // controle da tecla B
public:
    void Init();                    // inicialização
    void Update();                  // atualização
    void Draw();                    // desenho
    void Finalize();                // finalização
};

// -----------------------------------------------------------------------------

#endif