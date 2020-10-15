#pragma once

#include "Player.h"
class Game
{
private:
	void endGame();
public:
	Game();
	int bet;
	Player player;
	Player house;
	bool gameFinish;
	bool exit;
	char command;
	const bool& Exit() const { return exit; }
	const bool& IsGameFinish() const { return gameFinish; }
	void update();
	void reset();
	void gameplay();
	void newgame();
	void ifAcePlayer();
	void ifAceHouse();
};