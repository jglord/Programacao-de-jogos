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

#ifndef _FUTBUTTON_HOME_H_
#define _FUTBUTTON_HOME_H_

// ------------------------------------------------------------------------------
// Inclus�es

#include "Game.h"
#include "Camp.h"
#include "Sprite.h"
#include "Scene.h"
#include "Button.h"
#include "Ball.h"

// ------------------------------------------------------------------------------
enum BALL_STATE {
    SIDE,
    GOALKICK,
    KICKOFF,
    CORNER
};


class Home : public Game
{
private:
    Sprite * backg  = nullptr;       // pano de fundo
    Button * button   = nullptr;
    
    bool ctrlKeyESC = false;         // controle do ESC
    bool ctrlSpace  = false;          // controle do space
    bool ctrlKeyB   = false;           // controle da tecla B
    bool ctrlLMouse = false;

    Scene * scene   = nullptr;       // gerenciador de cena

    Camp * camp = nullptr;
    Ball * ball  = nullptr;

    bool ballCtrl;                  // flag para saber se bola esta em jogo ou nao


    bool viewBBox = false;          // habilita visualiza��o da bounding box
public:
    void Init();                    // inicializa��o
    void Update();                  // atualiza��o
    void Draw();                    // desenho
    void Finalize();                // finaliza��o
};

// -----------------------------------------------------------------------------

#endif