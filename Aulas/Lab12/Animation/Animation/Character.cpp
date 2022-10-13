
#include "Character.h"

Character::Character() {
	//sprite = new Sprite("Resources//character.png");
	character = new TileSet("Resources//dino.png", 24, 24, 24, 24);
	anim = new Animation(character, 0.120f, true);



}

Character::~Character() {
	delete character;
	delete anim;
}

void Character::Init(){
}




void Character::Update(){
	anim->NextFrame();
}


