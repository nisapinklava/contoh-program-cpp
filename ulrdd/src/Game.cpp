#include "Game.hpp"

Game::Game()
{
	srand(time(0));
}

Game::~Game() {}

void Game::setGameState(bool state)
{
	this->GameState = state;
}

bool Game::getGameState()
{
	return GameState;
}

vector<Player> &Game::getListPlayers()
{
	return listPlayers;
}

void Game::setListPlayers(vector<Player> lp)
{
	listPlayers = lp;
}

void Game::setup()
{
	createPlayers();
	createBoard();
}

void Game::createBoard()
{
	// # snakes takes you down from 'key' to 'value'
	snakes = {
		{8, 4},
		{18, 1},
		{26, 10},
		{39, 5},
		{51, 6},
		{54, 36},
		{56, 1},
		{60, 23},
		{75, 28},
		{83, 45},
		{85, 59},
		{90, 48},
		{92, 25},
		{97, 87},
		{99, 63}};

	// # ladder takes you up from 'key' to 'value'
	ladders = {
		{3, 20},
		{6, 14},
		{11, 28},
		{15, 34},
		{17, 74},
		{22, 37},
		{38, 59},
		{49, 67},
		{57, 76},
		{61, 78},
		{73, 86},
		{81, 98},
		{88, 91}};
}

void Game::createPlayers()
{
	int playerAmount;
	cout << "How many players: ";
	cin >> playerAmount;
	cout << "\n";

	for (int i = 0; i < playerAmount; i++)
	{
		string name;
		cout << "input player " << i + 1 << " name: ";
		cin >> name;
		cout << "\n";
		listPlayers.push_back(Player(name));
	}

	// for (int o = 0; o < ((int)listPlayers.size()); o++) {
	//   cout << listPlayers[o].getName() << "\n";
	// }
}

Player &Game::getPlayer()
{
	return listPlayers[activePlayer];
}

Player &Game::getPlayer(int index)
{
	return listPlayers[index];
}

void Game::setActivePlayer()
{
	// cout << "size player is: " << (int)listPlayers.size() << "\n" << "playerAktif: " << playerAktif << "\n";
	if (activePlayer == ((int)listPlayers.size() - 1))
	{
		// cout << "Player terakhir terlewati\n";
		activePlayer = 0;
	}
	else
	{
		activePlayer++;
	}

	enterToCon();

	// cout << "activePlayer baru: " << activePlayer << "\n\n\n";
}

int Game::rollDice()
{
	int dices = rand() % 6 + 1;

	return dices;
}

void Game::enterToCon()
{
	cout << "Press enter to continue: ";
	cin.ignore();
	cout << "\n\n";
}

void Game::checkPosition()
{
	if (getPlayer().getPosition() > 100)
	{
		int newPosition = 100 - (getPlayer().getPosition() - 100);
		cout << "You are passing land 100 and you must go back to: " << newPosition << "\n";
		getPlayer().setAbsolutePosition(newPosition);
	}
	else if (getPlayer().getPosition() == 100)
	{
		cout << "woa you are exactly on land 100, you win man, congrats\n";
		cout << "it's up to you if you want the game to be over or you can wait other player to reach 100 too :)\n";
		char yes;
		cout << "so, how about that [y/n]: ";
		cin >> yes;
		if (yes == 'y')
		{
			setGameState(false);
			return;
		}
		getListPlayers().erase(getListPlayers().begin() + activePlayer);
		activePlayer = -1;
		cout << "ok you are kind, let them plays"
			 << "\n\n";
		for (int i = 0; i < getListPlayers().size(); i++)
		{
			cout << "it's player " << getPlayer(i).getName() << "\n";
		}
		return;
	}
	try
	{
		if (ladders.at(getPlayer().getPosition()))
		{
			cout << "You were on a ladders so you go up-up to: " << ladders.at(getPlayer().getPosition());
			getPlayer().setAbsolutePosition(ladders.at(getPlayer().getPosition()));
		}
		else if (snakes.at(getPlayer().getPosition()))
		{
			cout << "You were on a snake so you go down-down to: " << snakes.at(getPlayer().getPosition());
			getPlayer().setAbsolutePosition(ladders.at(getPlayer().getPosition()));
		}

		cout << "\n";
	}
	catch (const std::exception &e)
	{
		cout << "You are on empty land"
			 << "\n";
	}
}

void Game::move()
{
	cout << getPlayer().getName() << " Turn"
		 << "\n";

	// cout << "Kocok dice ";

	int dice = rollDice();

	cout << "Roll dice: " << dice << "\n";

	getPlayer().setPosition(dice);
	cout << getPlayer().getName() << " on position: " << getPlayer().getPosition() << "\n";

	checkPosition();

	setActivePlayer();
}
