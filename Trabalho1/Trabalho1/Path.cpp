/**********************************************************************************
// Player (Código Fonte)
//
// Criação:     01 Jan 2013
// Atualização: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Player do jogo PacMan
//
**********************************************************************************/

#include "FutButton.h"
#include "Path.h"

// ---------------------------------------------------------------------------------

Path::Path(Button* b)
{
	float Xi, Yi, Xf, Yf, X, Y; // Atributos para guardar as coordenadas do primeiro click no botão
	bool ctrlLeftClick = false; // Atributo para obter a posição do primeiro click.

	//detectando o click no botão e guardando a posição
	if (window->KeyDown(VK_LBUTTON)) {
		if ((window->MouseX() > b->X() || window->MouseX() < b->X()) && (window->MouseY() > b->Y() || window->MouseY() < b->Y())) {
			Xi = b->X();
			Yi = b->Y();
			ctrlLeftClick = true;
		}
	} else if (window->KeyUp(VK_LBUTTON)) {
		Xf = b->X();
		Yf = b->Y();
		ctrlLeftClick = false;
	}
	//calculando tamanho da linha
	if (Xi > Xf) // Fazendo o maior valor - o menor para saber o tamanho da linha
		X = Xi - Xf;
	if (Xi < Xf) // Fazendo o maior valor - o menor para saber o tamanho da linha
		X = Xf - Xi;
	if (Yi > Yf) // Fazendo o maior valor - o menor para saber o tamanho da linha
		Y = Yi - Yf;
	if (Yi < Yf) // Fazendo o maior valor - o menor para saber o tamanho da linha
		Y = Yf - Yi;
	
	//criando bbox da linha
	BBox(new Line(Xf, Yf,(Xf + X),(Yf + Y))); // linha começa no ponto final do botão e termina na coordenada
												//  que posição final + tamanho da linha
}

// ---------------------------------------------------------------------------------

Path::~Path()
{

}

// ---------------------------------------------------------------------------------



// ---------------------------------------------------------------------------------

void Path::OnCollision(Object* obj)
{
}

// ---------------------------------------------------------------------------------

void Path::Update()
{

}

// ---------------------------------------------------------------------------------

void Path::Draw()
{

}

// ---------------------------------------------------------------------------------