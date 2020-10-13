#include "Player.h"

Player::Player()
{
	this->m_hand = 0;
	this->m_card = 0;

	system("cls");
}

int Player::randomCard()
{
	this->m_card = rand() % 13 + 1;

	this->m_hand += this->m_card;

	return this->m_card;
}
