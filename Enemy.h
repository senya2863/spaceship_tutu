#pragma once
#include <SFML/Graphics.hpp>

class Enemy {
public:
    virtual ~Enemy() = default;

    virtual void update(float dt) = 0;
    virtual void draw(sf::RenderWindow& window) const = 0;
    virtual const sf::FloatRect getBounds() const = 0;
    virtual bool isAlive() const = 0;
    virtual int getScoreValue() const = 0;
    virtual void takeDamage() = 0;

protected:
    sf::Vector2f position;
    sf::Vector2f velocity;
    bool alive;
};