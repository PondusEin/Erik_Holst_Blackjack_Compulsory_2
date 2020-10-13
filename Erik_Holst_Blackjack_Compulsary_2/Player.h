#pragma once
#define NOMINMAX
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include <limits>

class Player
{
private:
	int hand;
	int card;
	int bet;

public:
	Player();

	const int getHand() const { return hand; }

	int randomCard();
};

