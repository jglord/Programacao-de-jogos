/**********************************************************************************
// Home (C�digo Fonte) 
// 
// Cria��o:     18 Jan 2013
// Atualiza��o: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Tela de abertura do jogo PacMan
//
**********************************************************************************/

#include "Engine.h"
#include "Teste.h"
#include <sstream>
using namespace std;

// ------------------------------------------------------------------------------

void Teste::Init()
{
    scene = new Scene();
    camp = new Camp();
	backg = camp->sprite;
    scene->Add(camp, STATIC);
    button = new Button();
    scene->Add(button, MOVING);
    ball = new Ball();
    scene->Add(ball, MOVING);
    path = new Path(button);
    scene->Add(path, MOVING);
}

// ------------------------------------------------------------------------------

void Teste::Finalize()
{
    delete scene;
}

// ------------------------------------------------------------------------------

void Teste::Update()
{

    // sai do jogo com a tecla ESC
    if (ctrlKeyESC && window->KeyDown(VK_ESCAPE))
    {
        ctrlKeyESC = false;
        window->Close();
    }
    else if (window->KeyUp(VK_ESCAPE))
    {
        ctrlKeyESC = true;
    }

    // habilita/desabilita visualização de sprites
    if (ctrlKeyS && window->KeyDown('S'))
    {
        viewBBox = !viewBBox;
        ctrlKeyS = false;
    }
    else if (window->KeyUp('S'))
    {
        ctrlKeyS = true;
    }

    if (window->KeyDown(VK_LBUTTON)) {
        if ((window->MouseX() > button->X() || window->MouseX() < button->X()) && (window->MouseY() > button->Y() || window->MouseY() < button->Y())) {

            stringstream ss;
            ss << "clicando dentro do eixo x\n\n";
            OutputDebugStringA(ss.str().c_str());
            ctrlLMouse = true;

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

    // detec��o e resolu��o de colis�o
    scene->CollisionDetection();
}

// ------------------------------------------------------------------------------

void Teste::Draw()
{
    // desenha a bounding box de todos os objetos
    if (viewBBox)
    {
        scene->DrawBBox();
    }

    backg->Draw(float(window->CenterX()), float(window->CenterY()), Layer::BACK);
    scene->Draw();
}

// ------------------------------------------------------------------------------