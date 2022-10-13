/**********************************************************************************
// Animation
// 
// Criação:     10 Abr 2012
// Atualização: 27 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Exemplo de uso da classe Animation
//
**********************************************************************************/

#include "Engine.h"
#include "Game.h"
#include "TileSet.h"
#include "Animation.h"
#include "Resources.h"
#include "Character.h"
#include "Sprite.h"
#include "Scene.h"
// ------------------------------------------------------------------------------

class Anima : public Game
{
private:
	Character* character;
	Scene* scene;

public:
    void Init();                        // inicializa jogo
    void Update();                      // atualiza lógica do jogo
    void Draw();                        // desenha jogo
    void Finalize();                    // finaliza jogo
};

// -----------------------------------------------------------------------------

void Anima::Init() 
{
	scene = new Scene();
	character = new Character();

	scene->Add(character, MOVING);
}

// ------------------------------------------------------------------------------

void Anima::Update()
{
    // sai com o pressionamento do ESC
    if (window->KeyDown(VK_ESCAPE))
        window->Close();
	scene->Update();
} 

// ------------------------------------------------------------------------------

void Anima::Draw() {
	scene->Draw();
}

// ------------------------------------------------------------------------------

void Anima::Finalize()
{
	delete scene;
}


// ------------------------------------------------------------------------------
//                                  WinMain                                      
// ------------------------------------------------------------------------------

int APIENTRY WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, 
                     _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
    Engine * engine = new Engine();

    // configura janela
    engine->window->Mode(WINDOWED);
    engine->window->Size(960, 540);
    engine->window->Color(0, 0, 0);
    engine->window->Title("Animation");
    engine->window->Icon(IDI_ICON);

    // configura dispositivo gráfico
    //engine->graphics->VSync(true);
    
    // inicia o jogo
    int status = engine->Start(new Anima());

    delete engine;
    return status;
}

// ----------------------------------------------------------------------------

