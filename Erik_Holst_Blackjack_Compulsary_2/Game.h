#pragma once

#include "Player.h"
class Game
{
private:
	bool exit;
	char command;
	bool gameFinish;
	int totalSum;
	

	Player player;
	Player house;

	void endGame();

public:
	Game();

	const bool& Exit() const { return exit; }
	const bool& IsGameFinish() const { return gameFinish; }
	void update();
};