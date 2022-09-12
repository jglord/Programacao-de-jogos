/**********************************************************************************
// Button (Arquivo de Cabe�alho)
//
// Cria��o:     11 Set 2022
// Atualiza��o: 11 Set 2022
// Compilador:  Visual C++ 2022
//
// Descri��o:   Botao do futbutton
//
**********************************************************************************/

#ifndef _BUTTON_H_
#define _BUTTON_H_

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"                      // tipos espec�ficos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites

// ---------------------------------------------------------------------------------

class Button : public Object {
private:




public:

	Button();
	~Button();

	void OnCollision(Object * obj);

	void Draw();
	void Update();
};



#endif