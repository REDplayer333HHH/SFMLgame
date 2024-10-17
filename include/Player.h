#pragma once

#include "SFML/Graphics.hpp"

class Player
{
public:
	Player();

	// methods
	void render(sf::RenderWindow& window);
	void handleInput(sf::RenderWindow& window);
	void addGravity();
private:
	// fields

		// look
	sf::CircleShape m_playerBody;
	float m_radius{ 50.0f };
	sf::Color m_color{ sf::Color::Yellow };

		// physics
	float m_speed{ 2.0f };
	float m_baseGravity{ 0.001f };
	float m_tempGravity{ 0.0f };

	// methods
	void initBody();
};

