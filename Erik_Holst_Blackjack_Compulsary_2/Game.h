#pragma once

#include "Player.h"
class Game
{
private:

	char command;

//	int totalSum;



	void endGame();

public:
	Game();
	int bet;
	int ace;
	Player player;
	Player house;
	bool gameFinish;
	bool exit;
	const bool& Exit() const { return exit; }
	const bool& IsGameFinish() const { return gameFinish; }
	void update();
	void reset();
	void gameplay();
	void newgame();

};