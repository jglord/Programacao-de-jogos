/**********************************************************************************
// Player (Código Fonte)
// 
// Criação:     20 Abr 2012
// Atualização: 02 Set 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Define uma classe para o jogador
//
**********************************************************************************/

#include "Player.h"

// ---------------------------------------------------------------------------------

Player::Player()
{
	tileset = new TileSet("Resources/GravityGuy.png", 32, 48, 5, 10);
	anim	= new Animation(tileset, 0.120f, true);

	uint seqNormal[4] = { 1, 2, 3, 4 };
	uint seqInvert[4] = { 6, 7, 8, 9 };

	anim->Add(INVERTED, seqInvert, 4);
	anim->Add(NORMAL, seqNormal, 4);



	MoveTo(window->CenterX(), 24.0f, 0.0f);
}

// ---------------------------------------------------------------------------------

Player::~Player()
{
	delete tileset;
	delete anim;
}

// ---------------------------------------------------------------------------------

void Player::OnCollision(Object * obj)
{
    
}

// ---------------------------------------------------------------------------------

void Player::Update()
{
    
}

// ---------------------------------------------------------------------------------