/**********************************************************************************
// Campo (Código Fonte)
//
// Criação:     11 Set 2022
// Atualização: 11 Set 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Campo do jogo Futbutton
//
**********************************************************************************/

#include "FutButton.h"
#include "Camp.h"
#include "Player.h"


Camp::Camp() {
	sprite = new Sprite("Resources/Camp.jpg");

	
	//Criação de boundbox mista para as linhas do campo.
	Mixed * mixed = new Mixed();						//Criação de BBox mista
	
	Line* lineUP = new Line(80.5, 33, 1115.5, 33);		//Linha de cima
	Line* lineLEFT = new Line(80, 33.5, 80, 736.5);		//Linha da esquerda
	Line* lineDOWN = new Line(80, 736.5, 1115, 736.5);	//Linha de baixo
	Line* lineRIGHT = new Line(1115, 736.5, 1115, 33);	//Linha da direita
	
	//Inserindo linhas na bbox e instanciando.
	mixed->Insert(lineUP);
	mixed->Insert(lineLEFT);
	mixed->Insert(lineDOWN);
	mixed->Insert(lineRIGHT);
	BBox(mixed);
}

Camp::~Camp() {
	delete sprite;
}

void Camp::OnCollision(Object* obj) {

}

void Camp::Draw() {}

void Camp::Update() {
}
