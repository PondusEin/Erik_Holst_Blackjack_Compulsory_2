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
enum value
{
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK = 10,
    QUEEN = 10,
    KING = 10
};

enum suits {
    SPADES,
    HEARTS,
    CLUBS,
    DIAMONDS
};