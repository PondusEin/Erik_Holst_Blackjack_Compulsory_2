#include "Player.h"

Player::Player()
{
	hand = 0;
	card = 0;

	balance = 100;
	system("cls");
}

int Player::randomCard()
{
	card = rand() % 10 + 1;

	hand += card;

	return card;
}
