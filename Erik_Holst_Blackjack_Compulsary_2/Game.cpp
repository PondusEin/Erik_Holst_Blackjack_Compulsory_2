#include "Game.h"



Game::Game()
{
	this->m_running = true;
	this->m_gameFinish = false;
	this->m_command = ' ';

}

void Game::endGame()
{
	if (this->player.getHand() <= 21 && this->player.getHand() > this->house.getHand())
	{
		this->m_gameFinish = true;
		std::cout << "You win! \n";
	}
	else if (this->house.getHand() <= 21 && this->house.getHand() > this->player.getHand())
	{
		this->m_gameFinish = true;
		std::cout << "You lose! \n";
	}
	else
	{
		std::cout << "It's anyone's game!";
	}
}

void Game::update()
{
	std::cout << "Enter 'H' to draw a card. First person that is closer to 21 wins!\n";
	std::cin >> this->m_command;

	switch (this->m_command)
	{
	case 'h': case 'H':
		std::cout << "Player drew - " << this->player.randomCard() << '\n';
		std::cout << "House drew - " << this->house.randomCard() << '\n';

		std::cout << "\n\n";

		std::cout << "Player's hand - " << this->player.getHand() << '\n';
		std::cout << "House's hand - " << this->house.getHand() << '\n';
		
		std::cout << "\n\n";
		
		this->endGame();

		std::cout << '\n';
		
		std::cout << "Press [Enter] to continue... \n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.ignore();
		system("cls");
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
