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
    markButtonPositions();

    // Criando gerenciador de cena
    scene = new Scene();
    // Instaciando campo e utilizando como plano de fundo incialmente
    camp = new Camp();

    backg = camp->sprite;
    
    scene->Add(camp, STATIC);
 
    //Time 1
    team1 = new Team("Resources/ButtonBrasil.png");
    team1->organizeTeamInCamp(buttonPositions1);
    scene->Add(team1, MOVING);
    
    team2 = new Team("Resources/ButtonArgentina.png");
    team2->organizeTeamInCamp(buttonPositions2);
    scene->Add(team2, MOVING);


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

void Home::markButtonPositions() {
    // Time 1
    buttonPositions1[0]  = new Point(100, 375);     // goleiro
                         
    buttonPositions1[1]  = new Point(250, 150);     // lateral esquerdo
    buttonPositions1[2]  = new Point(200, 300);     // zagueiro esquerdo
    buttonPositions1[3]  = new Point(200, 450);     // zagueiro direito
    buttonPositions1[4]  = new Point(250, 600);     // lateral direito
                         
    buttonPositions1[5]  = new Point(350, 200);     // meio campo
    buttonPositions1[6]  = new Point(350, 300);     // meio campo
    buttonPositions1[7]  = new Point(350, 400);     // meio campo
    buttonPositions1[8]  = new Point(350, 500);     // meio campo
    buttonPositions1[9]  = new Point(450, 300);     // atacante
    buttonPositions1[10] = new Point(450, 400);     // atacante
    // ------------------------------------------------------------------------------

    // Time 2
                   
    buttonPositions2[0] = new Point(1050, 375);     // goleiro
                   
    buttonPositions2[1] = new Point();     // lateral esquerdo
    buttonPositions2[2] = new Point();     // zagueiro esquerdo
    buttonPositions2[3] = new Point();     // zagueiro direito
    buttonPositions2[4] = new Point();     // lateral direito
                   
    buttonPositions2[5] = new Point();     // meio campo
    buttonPositions2[6] = new Point();     // meio campo
    buttonPositions2[7] = new Point();     // meio campo
    buttonPositions2[8] = new Point();     // meio campo

    buttonPositions2[9] = new Point();     // atacante
    buttonPositions2[10] = new Point();     // atacante
    // ------------------------------------------------------------------------------



}