/**********************************************************************************
// Home (Código Fonte) 
// 
// Criação:     18 Jan 2013
// Atualização: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Tela de abertura do jogo PacMan
//
**********************************************************************************/

#include "Engine.h"
#include "Home.h"
#include "Level1.h"
#include <sstream>
using namespace std;

// ------------------------------------------------------------------------------

void Home::Init()
{
    // Criando gerenciador de cena
    scene = new Scene();
    // Instaciando campo e utilizando como plano de fundo incialmente
    camp = new Camp();

    backg = camp->sprite;
    
    scene->Add(camp, STATIC);
 
    //criando botao
    button = new Button();
    scene->Add(button, MOVING);
    
    // Criando bola
    ball = new Ball();
    scene->Add(ball, MOVING);
}

// ------------------------------------------------------------------------------

void Home::Finalize()
{
   
    delete camp;
    delete button;
}

// ------------------------------------------------------------------------------

void Home::Update()
{

//----------------------------------------------------------------------------------------------------------------------------------
     /*TEM QUE LEVAR ESSE UPDATE PRO BALL E FAZER A HOME*/
//----------------------------------------------------------------------------------------------------------------------------------



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

    if (window->KeyDown(VK_LBUTTON)) {
        if ((window->MouseX() > button->X() || window->MouseX() < button->X()) && (window->MouseY() > button->Y() || window->MouseY() < button->Y())) {
            stringstream ss;
            ss << "clicando dentro do eixo x\n\n";
            OutputDebugStringA(ss.str().c_str());
            ctrlLMouse = true;

            button->BBox(new Line(button->X(), button->Y(), button->X() + 5, button->Y() + 5));

            button->MoveTo(window->MouseX(), window->MouseY());

        }
    }
    else if (ctrlLMouse && window->KeyUp(VK_LBUTTON)) {
        stringstream ss;
        ss << "Soltou\n\n";
        OutputDebugStringA(ss.str().c_str());
        ctrlLMouse = false;
    }

    scene->Update();

    // detecção e resolução de colisão
    scene->CollisionDetection();
}

// ------------------------------------------------------------------------------

void Home::Draw()
{
    backg->Draw(float(window->CenterX()), float(window->CenterY()), Layer::BACK);
    scene->Draw();

    // desenha bounding box dos objetos
    if (viewBBox)
        scene->DrawBBox();
}

// ------------------------------------------------------------------------------