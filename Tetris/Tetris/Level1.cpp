/**********************************************************************************
// Level1 (Código Fonte) 
// 
// Criação:     18 Jan 2013
// Atualização: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Nível 1 do jogo PacMan
//
**********************************************************************************/

#include "Engine.h"
#include "Home.h"
#include "Level1.h"
#include "Level2.h"
#include "Player.h"
#include <string>
#include <fstream>
using std::ifstream;
using std::string;

// ------------------------------------------------------------------------------

void Level1::Init()
{
    // cria gerenciador de cena
    scene = new Scene();

    // cria playerfield
    playerField = new Playerfield();
    X = 502;
    Y = 130;

    scene->Add(playerField, STATIC);
    
    block2 = new Block2(BLOCKTYPE1);
    scene->Add(block2, MOVING);

    for (int i = 0; i < 4; i++) {
        scene->Add(block2->blocks[i], MOVING);
    }

    //inserção de pivots da primeira coluna
    for (int c = 0; c < 20; c++) {
        pivots[c][0] = new Pivot(X, Y);
        scene->Add(pivots[c][0], STATIC);
        Y += 26;
    }
    
    //inserção de pivots da segunda coluna coluna
    X += 25;
    Y = 130;
    for (int c = 0; c < 20; c++) {

        pivots[c][1] = new Pivot(X, Y);
        scene->Add(pivots[c][1], STATIC);
        Y += 26;
    }
    
    //inserção de pivots da terceira coluna coluna
    X += 25;
    Y = 130;
    for (int c = 0; c < 20; c++) {

        pivots[c][2] = new Pivot(X, Y);
        scene->Add(pivots[c][2], STATIC);
        Y += 26;
    }
    
    //inserção de pivots da quarta coluna coluna
    X += 25;
    Y = 130;
    for (int c = 0; c < 20; c++) {

        pivots[c][3] = new Pivot(X, Y);
        scene->Add(pivots[c][3], STATIC);
        Y += 26;
    }

    //inserção de pivots da quinta coluna coluna
    X += 25;
    Y = 130;
    for (int c = 0; c < 20; c++) {

        pivots[c][4] = new Pivot(X, Y);
        scene->Add(pivots[c][4], STATIC);
        Y += 26;
    }

    //inserção de pivots da sexta coluna coluna
    X += 25;
    Y = 130;
    for (int c = 0; c < 20; c++) {

        pivots[c][5] = new Pivot(X, Y);
        scene->Add(pivots[c][5], STATIC);
        Y += 26;
    }

    //inserção de pivots da setima coluna coluna
    X += 25;
    Y = 130;
    for (int c = 0; c < 20; c++) {

        pivots[c][6] = new Pivot(X, Y);
        scene->Add(pivots[c][6], STATIC);
        Y += 26;
    }

    //inserção de pivots da oitava coluna coluna
    X += 25;
    Y = 130;
    for (int c = 0; c < 20; c++) {

        pivots[c][7] = new Pivot(X, Y);
        scene->Add(pivots[c][7], STATIC);
        Y += 26;
    }

    //inserção de pivots da nona coluna coluna
    X += 25;
    Y = 130;
    for (int c = 0; c < 20; c++) {

        pivots[c][8] = new Pivot(X, Y);
        scene->Add(pivots[c][8], STATIC);
        Y += 26;
    }

    //inserção de pivots da decima coluna coluna
    X += 25;
    Y = 130;
    for (int c = 0; c < 20; c++) {

        pivots[c][9] = new Pivot(X, Y);
        scene->Add(pivots[c][9], STATIC);
        Y += 26;
    }


    
    backg = new Sprite("Resources/background.jpg");
    
    
}

// ------------------------------------------------------------------------------

void Level1::Finalize()
{
    delete scene;
}

// ------------------------------------------------------------------------------

void Level1::Update()
{
    // habilita/desabilita bounding box
    if (ctrlKeyB && window->KeyDown('B'))
    {
        viewBBox = !viewBBox;
        ctrlKeyB = false;
    }
    else if (window->KeyUp('B'))
    {
        ctrlKeyB = true;
    }
    
    if (window->KeyDown(VK_ESCAPE))
    {
        // volta para a tela de abertura
        Engine::Next<Home>();
    }
    else if (window->KeyDown('N'))
    {
        // passa manualmente para o próximo nível
        //Engine::Next<Level2>();
    }
    else
    {
        // atualiza cena
        scene->Update();
        scene->CollisionDetection();
    }
}

// ------------------------------------------------------------------------------

void Level1::Draw()
{
    // desenha cena
    scene->Draw();

    // desenha bounding box dos objetos
    if (viewBBox)
        scene->DrawBBox();

    backg->Draw(float(window->CenterX()), float(window->CenterY()), Layer::BACK);
}

// ------------------------------------------------------------------------------