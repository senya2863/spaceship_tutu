#include "Asteroid.h"
#include "Resources.h"

Asteroid::Asteroid(float yPos) : rotation(0.f), rotationSpeed(20.f + std::rand() % 30) {
    int size = 30 + std::rand() % 40;
    
    sprite.setTexture(Resources::get().asteroidTexture);
    sprite.setScale(size / sprite.getLocalBounds().width, size / sprite.getLocalBounds().height);
    sprite.setPosition(WINDOW_WIDTH, yPos);
    sprite.setOrigin(sprite.getLocalBounds().width / 2.f, sprite.getLocalBounds().height / 2.f);
    
    velocity.x = -150.f - std::rand() % 100;
    alive = true;
}

void Asteroid::update(float dt) {
    position.x += velocity.x * dt;
    position.y += velocity.y * dt;
    
    rotation += rotationSpeed * dt;
    sprite.setRotation(rotation);
    sprite.setPosition(position);
    
    if (position.x < -100.f) {
        alive = false;
    }
}

// Другие методы Asteroid...