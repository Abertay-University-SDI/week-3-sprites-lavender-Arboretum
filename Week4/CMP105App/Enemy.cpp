#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

// Update game objects
void Enemy::update(float dt)
{
	move(enemySpeed * enemyDirection.x * dt, enemySpeed * enemyDirection.y * dt);
}