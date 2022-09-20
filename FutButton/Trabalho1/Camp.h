/**********************************************************************************
// Campo (Arquivo de Cabeçalho)
//
// Criação:     11 Set 2022
// Atualização: 11 Set 2022
// Compilador:  Visual C++ 2022
//
// Descrição:   Campo do futbutton
//
**********************************************************************************/

#ifndef _BUTTON_H_
#define _BUTTON_H_

// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"                      // tipos específicos da engine
#include "Object.h"                     // interface de Object
#include "Sprite.h"                     // interface de Sprites

// ---------------------------------------------------------------------------------

class Camp : public Object {
private:


public:
	Sprite * sprite = nullptr;

	Camp();
	~Camp();

	void OnCollision(Object* obj);

	void Draw();
	void Update();
};



#endif