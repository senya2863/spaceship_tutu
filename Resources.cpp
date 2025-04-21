#include "Resources.h"

Resources::Resources() {
    if (!spaceshipTexture.loadFromFile("assets/spaceship.png")) {
        throw std::runtime_error("Failed to load spaceship texture");
    }
    
    if (!asteroidTexture.loadFromFile("assets/asteroid.png")) {
        throw std::runtime_error("Failed to load asteroid texture");
    }
    
    if (!alienTexture.loadFromFile("assets/alien.png")) {
        throw std::runtime_error("Failed to load alien texture");
    }
    
    if (!bulletTexture.loadFromFile("assets/bullet.png")) {
        throw std::runtime_error("Failed to load bullet texture");
    }
    
    if (!heartTexture.loadFromFile("assets/heart.png")) {
        throw std::runtime_error("Failed to load heart texture");
    }
    
    if (!emptyHeartTexture.loadFromFile("assets/empty_heart.png")) {
        throw std::runtime_error("Failed to load empty heart texture");
    }
    
    if (!ammoTexture.loadFromFile("assets/ammo.png")) {
        throw std::runtime_error("Failed to load ammo texture");
    }
    
    if (!fuelTexture.loadFromFile("assets/fuel.png")) {
        throw std::runtime_error("Failed to load fuel texture");
    }
    
    if (!backgroundTexture.loadFromFile("assets/background.png")) {
        throw std::runtime_error("Failed to load background texture");
    }
    
    if (!starTexture.loadFromFile("assets/star.png")) {
        throw std::runtime_error("Failed to load star texture");
    }
    
    if (!emptyStarTexture.loadFromFile("assets/empty_star.png")) {
        throw std::runtime_error("Failed to load empty star texture");
    }

    // Загрузка шрифта
    if (!font.loadFromFile("assets/font.ttf")) {
        throw std::runtime_error("Failed to load font");
    }

    // Загрузка звуков
    if (!shootSoundBuffer.loadFromFile("assets/shoot.wav")) {
        throw std::runtime_error("Failed to load shoot sound");
    }
    
    if (!explosionSoundBuffer.loadFromFile("assets/explosion.wav")) {
        throw std::runtime_error("Failed to load explosion sound");
    }
    
    if (!pickupSoundBuffer.loadFromFile("assets/pickup.wav")) {
        throw std::runtime_error("Failed to load pickup sound");
    }
}