#pragma once

#include "Player.h"
class Game
{
private:
	bool running;
	char command;
	bool gameFinish;
	int bet;

	Player player;
	Player house;

	void endGame();

public:
	Game();

	const bool& Run() const { return running; }
	const bool& IsGameFinish() const { return gameFinish; }

	void update();
};

