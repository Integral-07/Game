#pragma once

class Game {

public:
	bool Initialize();
	void runLoop();
	void Shutdown();

private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();
};