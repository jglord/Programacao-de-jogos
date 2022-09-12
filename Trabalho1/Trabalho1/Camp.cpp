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
	//Rect rect = new Rect();
	sprite = new Sprite("Resources/Camp.jpg");
	BBox(new Rect(0, 0, 50, 50));
}

Camp::~Camp() {
	delete sprite;
}

void Camp::OnCollision(Object* obj) {

}

void Camp::Draw() {}

void Camp::Update() {}
