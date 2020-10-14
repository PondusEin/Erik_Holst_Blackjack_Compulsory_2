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
        game.newgame();

        do
        {
            char answer;
            if (game.IsGameFinish())
            {
                std::cout << "Would you like to play another round? [Y/N] : ";
                answer = _getch();
                std::cout << std::endl;

                if (answer == 'y' || answer=='Y')
                {
                    game.gameFinish = false;
                }
                else if (answer == 'n' || answer == 'N')
                {
                    game.gameFinish = false;
                    game.exit = true;
                }
                else
                {
                    std::cout << "Please press 'Y' to replay, or 'N' to exit game.";
                }
            }
        } while (game.IsGameFinish());
    } while (!game.Exit());

    std::cout << "\n\nThank you, come again\n\n";
    system(EXIT_SUCCESS);
}