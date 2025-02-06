#include "Player.h"

Player::Player()
{


}

Player::~Player()
{

}

// handle user input
void Player::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::W))
	{
		move(0, speed * -1 * dt);
	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		move(speed * -1 * dt, 0);
	}
	if (input->isKeyDown(sf::Keyboard::S))
	{
		move(0, speed * 1 * dt);
	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		move(speed * 1 * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::W) ^ input->isKeyDown(sf::Keyboard::A) ^ input->isKeyDown(sf::Keyboard::S) ^ input->isKeyDown(sf::Keyboard::D))
	{
		speed = 100;
	}
	if ((input->isKeyDown(sf::Keyboard::W) && input->isKeyDown(sf::Keyboard::A)) ^ (input->isKeyDown(sf::Keyboard::A) && input->isKeyDown(sf::Keyboard::S)) ^ (input->isKeyDown(sf::Keyboard::S) && input->isKeyDown(sf::Keyboard::D)) ^ (input->isKeyDown(sf::Keyboard::D) && input->isKeyDown(sf::Keyboard::W)))
	{
		speed = 71;
	}
}