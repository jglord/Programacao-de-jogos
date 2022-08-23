/**********************************************************************************
// Frogger (Código Fonte)
// 
// Criação:     19 Dez 2012
// Atualização: 14 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Define o objeto Sapo no jogo Frogger
//
**********************************************************************************/

#include "Frogger.h"

// ---------------------------------------------------------------------------------

Frogger::Frogger()
{
    sprite = new Sprite("Resources/frog.png");
    MoveTo(window->CenterX() - sprite->Width()/2.0f, 545.0f, Layer::FRONT);
    ctrlUp = true;
    ctrlDown = true;
}

// ---------------------------------------------------------------------------------

Frogger::~Frogger()
{
    delete sprite;
}

// ---------------------------------------------------------------------------------

void Frogger::Update()
{
    // desloca sapo para cima
    if (ctrlUp && window->KeyDown(VK_UP))
    {
        Translate(0.0f, -40.0f);
        ctrlUp = false;
    }
    else if (window->KeyUp(VK_UP))
    {
        ctrlUp = true;
    }
    
    // desloca sapo para baixo
    if (ctrlDown && window->KeyDown(VK_DOWN))
    {
        Translate(0.0f, 40.0f);
        ctrlDown = false;
    }
    else if (window->KeyUp(VK_DOWN))
    {
        ctrlDown = true;
    }
   
	// desloca sapo para esquerda
	if (ctrlDown && window->KeyDown(VK_LEFT))
	{
		Translate(-40.0f, 0.0f);
		ctrlDown = false;
	}
	else if (window->KeyUp(VK_LEFT))
	{
		ctrlDown = true;
	}


    // mantém sapo dentro da tela
    if (y < 65)
        MoveTo(x, 65);

    if (y > 545)
        MoveTo(x, 545);

	if (x < 0)
		MoveTo(x, 0);
	if (x > 800)
		MoveTo(x, 800);
}

// ---------------------------------------------------------------------------------
