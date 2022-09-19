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

#ifndef _FUTBUTTON_TESTE_H_
#define _FUTBUTTON_TESTE_H_

// ------------------------------------------------------------------------------
// Inclus�es

#include "Game.h"
#include "Camp.h"
#include "Sprite.h"
#include "Scene.h"
#include "Button.h"
#include "Ball.h"
#include "Path.h"

// ------------------------------------------------------------------------------


class Teste : public Game
{
private:
    
    Sprite * backg   = nullptr;       // pano de fundo
    
    bool ctrlKeyESC  = false;         // controle do ESC
    bool ctrlSpace   = false;          // controle do space
    bool ctrlKeyB    = false;           // controle da tecla B
    bool ctrlUp      = false;             // controle da tecla up
    bool ctrlKeyDown = false;        // controle da tecla Down
    bool ctrlKeyS    = false;           //controle tecla S   
    bool ctrlLMouse  = false;

    bool viewScene   = false;              // visualiza sprites da cena


    Scene * scene    = nullptr;       // gerenciador de cena

    Path* path       = nullptr;
    Button* button   = nullptr;
    Camp * camp      = nullptr;
    Ball * ball      = nullptr;

    Point* buttonPositions1[11];
    Point* buttonPositions2[11];

    Team* team1 = nullptr;
    Team* team2 = nullptr;

    bool ballCtrl;                  // flag para saber se bola esta em jogo ou nao


    bool viewBBox = false;          // habilita visualiza��o da bounding box
public:
    void Init();                    // inicializa��o
    void Update();                  // atualiza��o
    void Draw();                    // desenho
    void Finalize();                // finaliza��o
    void markButtonPositions();
    
};

// -----------------------------------------------------------------------------

#endif