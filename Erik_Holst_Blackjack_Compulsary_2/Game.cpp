#include "Game.h"



Game::Game()
{
	exit = false;
	gameFinish = false;
	command = ' ';
	bet={ 10 };
}

void Game::endGame()
{
	if (player.getHand() <= 21 && player.getHand() > house.getHand() || house.getHand() > 21)
	{
		std::cout << "You win! \n";
	}
	else if (house.getHand() <= 21 && house.getHand() > player.getHand() || player.getHand() > 21 )
	{
		std::cout << "You lose! \n";
	}
	else if (house.getHand() == player.getHand())
	{
		std::cout << "It's a tie, no winners, no loosers.";
	}
}
void betting() {


	player.getBalance() -= bet;
	house.getBalance() -= bet;
}

void Game::update()
{
	std::cout << "Please make a bet.\n\nYou have: " << player.getBalance() << " dollars. The house have: " << house.getBalance() << " dollars. \n\nMinimum amount is $10. " << std::endl;
	std::cout << "Input: $";
	
	do
	{
		if (bet < 10)
		{
			std::cout << "Error: Must bet minimum $10 to participate!";
		}
		else if (player.getBalance() < bet)
		{
			std::cout << "Error: Player do not have that amount of money!";
		}
		else if (house.getBalance() < bet)
		{
			std::cout << "Error: House do not have that amount of money!";
		}
	} while (bet <10 || bet>player.getBalance() || bet > house.getBalance());

	betting();
	std::cout << "Enter 'H' to draw a card. Enter 'S' to hold with your cards. First person that is closer to 21 wins!\n";
	std::cin >> command;
	do
	{


		switch (command)
		{
		case 'h': case 'H':
			std::cout << "Player drew - " << player.randomCard() << '\n';

			std::cout << "\n\n";

			std::cout << "Player's hand - " << player.getHand() << '\n';
		
			std::cout << "\n\n";
			if (player.getHand()>21)
			{
				endGame();
			}
			else
			{
				std::cout << "Press [Enter] to continue... \n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cin.ignore();
				system("cls");
			}
			break;
		case 's': case 'S':
			while (house.getHand() <=17)
			{
				std::cout << "House drew - " << house.randomCard() << '\n';

				std::cout << "\n\n";

				std::cout << "House's hand - " << house.getHand() << '\n';
				std::cout << "Player's hand - " << player.getHand() << '\n';

				std::cout << "\n\n";
			}
			if (house.getHand() > 21)
			{
				endGame();
			}
			else
			{
				std::cout << "Press [Enter] to continue... \n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cin.ignore();
				system("cls");
			}
			break;
		default:
			std::cout << "Error: not a valid command.\nPress [Enter] to continue... \n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin.ignore();
			system("cls");
			break;
	
		}
	} while (player.getBalance() == 0 || house.getBalance() == 0);
}
