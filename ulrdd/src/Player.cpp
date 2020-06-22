#include "Player.hpp"

Player::Player(string name)
{
	this->name = name;
}

Player::~Player()
{
	// cout << "Destructor called\n";
}

void Player::setName(string name)
{
	this->name = name;
}

string Player::getName()
{
	return name;
}

void Player::setAbsolutePosition(int position)
{
	this->position = position;
}

void Player::setPosition(int position)
{
	this->position += position;
	// cout << name << this->position << "\n";
}

int Player::getPosition()
{
	return this->position;
}