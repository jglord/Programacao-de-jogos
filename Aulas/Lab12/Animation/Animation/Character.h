/**********************************************************************************
// Animation (Arquivo de Cabe�alho)
//
// Cria��o:     28 Set 2011
// Atualiza��o: 27 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Classe para animar sequ�ncias em folha de sprites
//
**********************************************************************************/

#ifndef _PROGJOGOS_CHARACTER_H_
#define _PROGJOGOS_CHARACTER_H_

// ---------------------------------------------------------------------------------

#include "Sprite.h"                 // tipo sprite para renderiza��o
#include "TileSet.h"                // folha de sprites da anima��o
#include "Object.h"                  // tempo entre quadros da anima��o
#include "Types.h"                  // tipos espec�ficos da engine

#include "Animation.h"                  // tipos espec�ficos da engine
// ---------------------------------------------------------------------------------

class Character : public Object
{
private:
	//Sprite* sprite = nullptr;          // sprite de fundo
	TileSet* character = nullptr;      // folha de sprites da explos�o
	Animation* anim = nullptr;         // anima��o da explos�o

public:

	Character();
	~Character();

	void Init();
	void Draw();
	void Update();
	void Finalize();
	
};

// ---------------------------------------------------------------------------------
inline void Character::Draw()
{
	//sprite->Draw(window->CenterX(), window->CenterY(), Layer::BACK);
	anim->Draw(window->CenterX(), window->CenterY() - 140.0f);
}
// ---------------------------------------------------------------------------------

inline void Character::Finalize() {
	//delete sprite;
	delete character;
	delete anim;
}

#endif