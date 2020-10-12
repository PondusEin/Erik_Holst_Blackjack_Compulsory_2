#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <limits>
#include <Windows.h>
#include <conio.h>

int playerBalance = 100; int houseBalance = 100;
bool betPlaced = false, firstRound = true, gameFinish = false;
int playerNrOfCards, dealerNrOfCards;
int playerCards, dealerCards;

struct Players
{
    int money{ 100 };
    int score{ 0 };
    std::vector<int> cards;
};
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

void blackJackDealer() {

}

void blackJackPlayer() {

}

void blackJackGame() {

}
void information() {

}

int main()
{
    srand((unsigned)time(nullptr));
    do
    {
        if (playerBalance == 0 || houseBalance == 0)
        {
            gameFinish == true;
            break;
        }
    } while (gameFinish == false);
}

