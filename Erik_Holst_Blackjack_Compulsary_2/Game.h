#pragma once

#include "Player.h"
class Game
{
private:
	bool running;
	char command;
	bool gameFinish;
	int balance;
	int totalSum;
	

	Player player;
	Player house;

	void endGame();

public:
	Game();

	const bool& Run() const { return running; }
	const bool& IsGameFinish() const { return gameFinish; }
	const int getBalance() const { return balance; }
	void update();
};