#include"DxLib.h"
#include "Game.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	Game game;
	bool success = game.Initialize();
	if (success) {

		game.runLoop();
	}
	game.Shutdown();

	return 0;
}