/**********************************************************************************
// Missile (C�digo Fonte)
// 
// Cria��o:     23 Nov 2011
// Atualiza��o: 13 Out 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Define uma classe para um m�ssil/proj�til
//
**********************************************************************************/

#include "Missile.h"
#include "Vector2D.h"

// ------------------------------------------------------------------------------

Missile::Missile(Plane * plane, Image * img)
{
    // inicializa sprite
    sprite = new Sprite(img);

    // inicializa vetor velocidade
    speed.RotateTo(plane->Angle());
    speed.ScaleTo(500);
	
    
    // usa mesma rota��o do avi�o
    RotateTo(plane->Rotation());
    
    // move para posi��o
    MoveTo(plane->X() + 50 * cos(speed.Radians()), plane->Y() + - 50*sin(speed.Radians()));
}


Missile::Missile(Plane* plane, Image* img, float angle)
{
	// inicializa sprite
	sprite = new Sprite(img);

	// inicializa vetor velocidade
	speed.RotateTo(angle);
	speed.ScaleTo(500);


	// usa mesma rota��o do avi�o
	RotateTo(plane->Rotation());

	// move para posi��o
	//MoveTo(plane->X(), plane->Y() - 35);
	MoveTo(plane->X() + 50 * cos(speed.Radians()), plane->Y() - 50 * sin(speed.Radians()));
}

Missile::Missile(Plane* plane, Image* img, float angle, float m) {
	// inicializa sprite
	sprite = new Sprite(img);

	// inicializa vetor velocidade
	speed.RotateTo(angle + m);
	speed.ScaleTo(500);


	// usa mesma rota��o do avi�o
	RotateTo(plane->Rotation());

	// move para posi��o
	//MoveTo(plane->X(), plane->Y() - 35);
	MoveTo((plane->X() + 50 * cos(speed.Radians()) + m), (plane->Y() - 50 * sin(speed.Radians())));
}


// ------------------------------------------------------------------------------

Missile::~Missile()
{
    delete sprite;
}

// -------------------------------------------------------------------------------

void Missile::Update()
{
    // desloca m�ssil pelas componentes do vetor speed
    Translate(speed.XComponent() * gameTime, -speed.YComponent() * gameTime);
    
    // se o m�ssil sair da janela
    if (x > window->Width() || x < 0 || y > window->Height() || y < 0)
    {
        Vector2D::audio->Play(EXPLOSION);
        Vector2D::scene->Delete();
    }
}

// -------------------------------------------------------------------------------

void Missile::Draw()
{
    sprite->Draw(x, y, z, scale, rotation);
}

// -------------------------------------------------------------------------------
