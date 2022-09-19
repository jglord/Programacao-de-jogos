/**********************************************************************************
// Button (Arquivo de Cabeçalho)
//
// Criação:     11 Set 2022
// Atualização: 11 Set 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Botao do futbutton
//
**********************************************************************************/
#ifndef _BUTTONGK_H
#define _BUTTONGK_H

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites

// ---------------------------------------------------------------------------------

class ButtonGK : public Object {
private:
	Sprite* sprite = nullptr;

public:

	ButtonGK();
	~ButtonGK();

	void OnCollision(Object* obj);

	void Draw();
	void Update();
};

inline void ButtonGK::Draw() { sprite->Draw(x, y, z); }

#endif // !_BUTTONGK_H
