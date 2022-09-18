/**********************************************************************************
// Campo (C�digo Fonte)
//
// Cria��o:     11 Set 2022
// Atualiza��o: 11 Set 2022
// Compilador:  Visual C++ 2022
//
// Descri��o:   Campo do jogo Futbutton
//
**********************************************************************************/

#include "FutButton.h"
#include "Camp.h"
#include "Player.h"


Camp::Camp() {
	//Rect rect = new Rect();
	sprite = new Sprite("Resources/Camp.jpg");
	BBox(new Rect(*new Point(58, 25), *new Point(1092, 728)));
}

Camp::~Camp() {
	delete sprite;
}

void Camp::OnCollision(Object* obj) {

}

void Camp::Draw() {}

void Camp::Update() {
}
