#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <limits>

class Player
{
private:
	int m_hand;
	int m_card;

public:
	Player();

	const int getHand() const { return this->m_hand; }

	int randomCard();
};

