#include "Game.h"


/*
bool betPlaced = false, firstRound = true;
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
*/
int main()
{
    srand((unsigned)time(nullptr));

    Game game;
    do
    {
        game.update();

        do
        {
            if (game.IsGameFinish())
            {
                std::cout << "Would you like to play another round? [Y/N]";
                std::cin >> 
            }
        } while (game.IsGameFinish());
    } while (!game.Exit());

}