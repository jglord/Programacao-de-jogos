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
using namespace std;

// ---------------------------------------------------------------------------------
Frogger::Frogger()
{
    sprite      = new Sprite("Resources/frog.png");
    spriteBack  = new Sprite("Resources/frogBack.png");
    spriteLeft  = new Sprite("Resources/frogLeft.png");
    spriteRight = new Sprite("Resources/frogRight.png");
    spriteCtrl  = new Sprite("Resources/frog.png");

    MoveTo(window->CenterX() - sprite->Width() / 2.0f, 545.0f, Layer::FRONT);

    ctrlUp      = true;
    ctrlDown    = true;
    ctrlLeft    = true;
    ctrlRight   = true;

}

// ---------------------------------------------------------------------------------

Frogger::~Frogger()
{
    delete sprite;
    delete spriteBack;
    delete spriteRight;
    delete spriteLeft;
}

// ---------------------------------------------------------------------------------

void Frogger::Update()
{
    // Mover sapo para cima
    if (ctrlUp && window->KeyDown(VK_UP)) {

        Translate(0.0f, -sprite->Height());
        ctrlUp = false;
    }
    else if (window->KeyUp(VK_UP)) {
        ctrlUp = true;
    }
    // ---------------------------------------------------------------------------------

    // Mover sapo para baixo
    if (ctrlDown && window->KeyDown(VK_DOWN)) {

        Translate(0.0f, spriteBack->Height());
        ctrlDown = false;
    }
    else if (window->KeyUp(VK_DOWN)) {
        ctrlDown = true;
    }
    // ---------------------------------------------------------------------------------

    // Mover sapo para esquerda
    if (ctrlLeft && window->KeyDown(VK_LEFT)) {
        Translate(-40.0f, 0.0f);
        ctrlLeft = false;
    }
    else if (window->KeyUp(VK_LEFT)) {
        ctrlLeft = true;
    }
    // ---------------------------------------------------------------------------------

    // Mover sapo para direita
    if (ctrlRight && window->KeyDown(VK_RIGHT)) {
        Translate(spriteLeft->Width(), 0.0f);
        ctrlRight   = false;
    }
    else if (window->KeyUp(VK_RIGHT)) {
        ctrlRight = true;
    }
    // ---------------------------------------------------------------------------------

    // mantém sapo dentro da tela
    if (y < 65)
        MoveTo(0, 65);
    if (y > 545)
        MoveTo(0, 545);
	if (x < 0) 
		MoveTo(0, y);
	if (x > 800 - sprite->Width())
		MoveTo(800 - sprite->Width(), y);
    // ---------------------------------------------------------------------------------

}

void Frogger::Draw()
{
    spriteCtrl->Draw(x, y, z);

    if (!ctrlUp) {
        spriteCtrl = sprite;
    }

    if (!ctrlDown) {
        spriteCtrl = spriteBack;
    }

    if (!ctrlLeft) {
        spriteCtrl = spriteLeft;
    }

    if (!ctrlRight) {
        spriteCtrl = spriteRight;
    }
}

// ---------------------------------------------------------------------------------
