#include "Game.h"
#include"DxLib.h"

#define notQuit GetWindowUserCloseFlag(false)

bool Game::Initialize()
{
	ChangeWindowMode(TRUE); //ウィンドウモードに設定

	if (DxLib_Init() == -1) {

		return false;
	}

	return true;
}

void Game::runLoop()
{
	while (notQuit) {

		ProcessInput();
		UpdateGame();
		GenerateOutput();
	}
}

void Game::Shutdown()
{
	DxLib_End();
}

void Game::ProcessInput()
{
}

void Game::UpdateGame()
{
}

void Game::GenerateOutput()
{
	ScreenFlip();
}

