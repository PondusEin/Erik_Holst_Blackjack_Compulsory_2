#include "Game.h"



Game::Game()
{
	exit = false;
	gameFinish = false;
	command = ' ';
	bet={ 10 };
}

void Game::newgame() {
	player.balance = 100;
	house.balance = 100;
	update();
}

void ifAce(Player &player) {
	int ace;
	for (int i = 0; i < length; i++)
	{

	}
}

void Game::reset() {
	player.hand = 0;
	house.hand = 0;
	if (player.balance < 10 || house.balance < 10)
	{
		gameFinish = true;
	}
	else
	{
		update();
	}
}

void Game::endGame()
{
	if (player.getHand() <= 21 && player.getHand() > house.getHand() || house.getHand() > 21)
	{
		std::cout << "You win! \n";
		player.balance += bet * 2;
		reset();

	}
	else if (house.getHand() <= 21 && house.getHand() > player.getHand() || player.getHand() > 21 )
	{
		std::cout << "You lose! \n";
		house.balance += bet * 2;
		reset();
	}
	else if (house.getHand() == player.getHand())
	{
		std::cout << "It's a tie, no winners, no loosers.\n";
		player.balance += bet;
		house.balance += bet;
		reset();
	}
}



void Game::update()
{
	do
	{
		std::cout << "Please make a bet.\n\nYou have: " << player.getBalance() << " dollars. The house have: " << house.getBalance() << " dollars. \n\nMinimum amount is $10. " << std::endl;
		std::cout << "Input: $";

		std::cin >> bet;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			system("cls");
		}
		else if (bet < 10)
		{
			system("cls");
			std::cout << "Error: Must bet minimum $10 to participate!\n";
		}
		else if (player.getBalance() < bet)
		{
			system("cls");
			std::cout << "Error: Player do not have that amount of money!\n";
		}
		else if (house.getBalance() < bet)
		{
			system("cls");
			std::cout << "Error: House do not have that amount of money!\n";
		}

	} while (bet < 10 || bet > player.getBalance() || bet > house.getBalance());

	player.balance -= bet;
	house.balance -= bet;

	gameplay();
}

void Game::gameplay() {
	bool playing = true;
	while (playing)
	{
		std::cout << "Enter 'H' to draw a card. Enter 'S' to hold with your cards. First person that is closer to 21 wins!\n";
		std::cin >> command;

		switch (command)
		{
		case 'h': case 'H':
			std::cout << "Player drew - " << player.randomCard() << '\n';

			std::cout << "\n\n";

			std::cout << "Player's hand - " << player.getHand() << '\n';

			std::cout << "\n\n";
			if (player.getHand() > 21)
			{
				playing = false;
				endGame();
			}
			else
			{
				std::cout << "Press [Enter] to continue... \n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				char type=_getch();
				system("cls");
			}
			break;
		case 's': case 'S':
			while (house.getHand() <= player.getHand())
			{

				std::cout << "House drew - " << house.randomCard() << '\n';

				std::cout << "\n\n";

				std::cout << "House's hand - " << house.getHand() << '\n';
				std::cout << "Player's hand - " << player.getHand() << '\n';

				std::cout << "\n\n";
				Sleep(3000);
			}
	/*		if (house.getHand() > 21)
			{
				playing = false;
				endGame();
			}*/
			if (true)
			{

				/*std::cout << "Press [Enter] to continue... \n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cin.ignore();*/
				system("cls");
			}
			playing = false;
			endGame();
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
}