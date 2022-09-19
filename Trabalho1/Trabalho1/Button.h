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
#ifndef _BUTTON_H
#define _BUTTON_H


enum BUTTON_STATE{SELECTED, KICKING, STOPED};

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites


// ---------------------------------------------------------------------------------

class Button : public Object {
private:

public:
	
	uint state;
	Sprite * sprite = nullptr;
	Button();
	~Button();

	void OnCollision(Object * obj);

	void Draw();
	void Update();
};

inline void Button::Draw() { sprite->Draw(x, y, z); }

#endif // !_BUTTON_H
