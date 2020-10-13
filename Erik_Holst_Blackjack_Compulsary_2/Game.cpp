#include "Game.h"



Game::Game()
{
	running = true;
	gameFinish = false;
	command = ' ';

}

void Game::endGame()
{
	if (player.getHand() <= 21 && player.getHand() > house.getHand())
	{
		gameFinish = true;
		std::cout << "You win! \n";
	}
	else if (house.getHand() <= 21 && house.getHand() > player.getHand())
	{
		gameFinish = true;
		std::cout << "You lose! \n";
	}
	else if (house.getHand() == player.getHand())
	{
		gameFinish = true;
		std::cout << "It's a tie, no winners, no loosers.";
	}
	else
	{
		std::cout << "It's anyone's game! \n";
	}
}

void Game::update()
{
	std::cout << "Please make a bet. Minimum amount is 10$. " << std::endl;
	std::cin >> bet;
	player.getBalance();
	std::cout << "Enter 'H' to draw a card. Enter 'S' to hold with your cards. First person that is closer to 21 wins!\n";
	std::cin >> command;

	switch (command)
	{
	case 'h': case 'H':
		std::cout << "Player drew - " << player.randomCard() << '\n';

		std::cout << "\n\n";

		std::cout << "Player's hand - " << player.getHand() << '\n';
		
		std::cout << "\n\n";
		if (player.getHand()>21)
		{
			this->endGame();
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
	
		std::cout << "House drew - " << house.randomCard() << '\n';

		std::cout << "\n\n";

		std::cout << "House's hand - " << house.getHand() << '\n';
		std::cout << "Player's hand - " << player.getHand() << '\n';

		std::cout << "\n\n";

		if (house.getHand() > 21)
		{
			this->endGame();
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
}
