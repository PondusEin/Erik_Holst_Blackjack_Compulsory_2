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

public:
	Player();
	int hand;
	int card;
	int balance;
	const int getHand() const { return hand; }
	const int getBalance() const { return balance; }

	int randomCard();
};

