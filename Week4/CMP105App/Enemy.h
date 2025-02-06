#pragma once

#include "Framework/GameObject.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	float enemySpeed = 100;
	sf::Vector2f enemyDirection = sf::Vector2f(1, 1);

	void update(float dt) override;
};

