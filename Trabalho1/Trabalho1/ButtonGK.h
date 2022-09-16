/**********************************************************************************
// ButtonGK (Arquivo de Cabe�alho)
//
// Cria��o:     15 Set 2022
// Atualiza��o: 15 Set 2022
// Compilador:  Visual C++ 2022
//
// Descri��o:   Botao do futbutton para o goleiro
//
**********************************************************************************/
#ifndef _BUTTON_H
#define _BUTTON_H

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"                      // tipos espec�ficos da engine
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

#endif // !_BUTTON_H
