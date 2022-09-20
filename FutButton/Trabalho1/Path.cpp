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
	button = b;
	float Xi{}, Yi{}, Xf{}, Yf{}, X, Y = NULL; // Atributos para guardar as coordenadas do primeiro click no botão
	bool ctrlLeftClick = false; // Atributo para obter a posição do primeiro click.

	//detectando o click no botão e guardando a posição
	if (window->KeyDown(VK_LBUTTON)) {
		if ((window->MouseX() > button->X() || window->MouseX() < button->X()) && (window->MouseY() > button->Y() || window->MouseY() < button->Y())) {
			Xi = button->X();
			Yi = button->Y();
			button = b;
			ctrlLeftClick = true;
		}

	} else if (window->KeyUp(VK_LBUTTON)) {
		Xf = button->X();
		Yf = button->Y();
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



// ---------------------------------------------------------------------------------



// ---------------------------------------------------------------------------------


// ---------------------------------------------------------------------------------

// ---------------------------------------------------------------------------------


// ---------------------------------------------------------------------------------