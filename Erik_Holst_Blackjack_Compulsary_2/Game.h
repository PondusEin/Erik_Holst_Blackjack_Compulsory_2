#pragma once

#include "Player.h"
class Game
{
private:
	bool m_running;
	char m_command;
	bool m_gameFinish;

	Player player;
	Player house;

	void endGame();

public:
	Game();

	const bool& Run() const { return this->m_running; }
	const bool& IsGameFinish() const { return this->m_gameFinish; }

	void update();
};

