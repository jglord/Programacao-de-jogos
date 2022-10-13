/**********************************************************************************
// Animation (Arquivo de Cabeçalho)
//
// Criação:     28 Set 2011
// Atualização: 27 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Classe para animar sequências em folha de sprites
//
**********************************************************************************/

#ifndef _PROGJOGOS_CHARACTER_H_
#define _PROGJOGOS_CHARACTER_H_

// ---------------------------------------------------------------------------------

#include "Sprite.h"                 // tipo sprite para renderização
#include "TileSet.h"                // folha de sprites da animação
#include "Object.h"                  // tempo entre quadros da animação
#include "Types.h"                  // tipos específicos da engine

#include "Animation.h"                  // tipos específicos da engine
// ---------------------------------------------------------------------------------

class Character : public Object
{
private:
	//Sprite* sprite = nullptr;          // sprite de fundo
	TileSet* character = nullptr;      // folha de sprites da explosão
	Animation* anim = nullptr;         // animação da explosão

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