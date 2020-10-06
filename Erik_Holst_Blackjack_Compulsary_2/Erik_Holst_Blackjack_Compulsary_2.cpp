#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <limits>
#include <Windows.h>
#include <conio.h>

int balance = 100;
bool betPlaced = false, first = true, gameFinish = false;
int playerNrOfCards, dealerNrOfCards;
int playerCards, dealerCards;

enum rank
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

struct MyStruct
{

};

void blackJackDealer() {

}

void blackJackPlayer() {

}

void blackJackGame() {

}

int main()
{
    srand((unsigned)time(nullptr));
}

