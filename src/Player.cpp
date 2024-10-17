#include "SFML/Graphics.hpp"
#include "../include/Player.h"

#include <iostream>

// publics

Player::Player() {
    initBody();
}

void Player::addGravity() {
    m_tempGravity += m_baseGravity;
    m_playerBody.move(0.0f, m_tempGravity);
}

void Player::render(sf::RenderWindow& window) {
    window.draw(m_playerBody);
}

void Player::handleInput(sf::RenderWindow& window) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        m_tempGravity = 0;
        m_playerBody.move(0.0f, -m_speed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        m_playerBody.move(-m_speed, 0.0f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        m_playerBody.move(m_speed, 0.0f);
    }
}

// privates

void Player::initBody() {
    m_playerBody.setRadius(m_radius);
    m_playerBody.setPosition(0, 0);
    m_playerBody.setFillColor(m_color);
}
