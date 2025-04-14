#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;
const int MAX_HEALTH = 10;
const int MAX_AMMO = 100;

struct Resources {
    sf::Texture spaceshipTexture;    // Текстура корабля игрока
    sf::Texture asteroidTexture;     // Текстура астероидов
    sf::Texture alienTexture;        // Текстура пришельцев
    sf::Texture bulletTexture;       // Текстура пуль
    sf::Texture heartTexture;        // Полное сердце (здоровье)
    sf::Texture emptyHeartTexture;   // Пустое сердце
    sf::Texture ammoTexture;        // Иконка боеприпасов
    sf::Texture fuelTexture;         // Иконка топлива
    sf::Texture backgroundTexture;  // Фон игры
    sf::Texture starTexture;        // Звезда (для рейтинга)
    sf::Texture emptyStarTexture;   // Пустая звезда
    
    sf::Font font;                   // Основной шрифт для текста
    sf::SoundBuffer shootSoundBuffer; // Звук выстрела
    sf::SoundBuffer explosionSoundBuffer; // Звук взрыва
    sf::SoundBuffer pickupSoundBuffer; // Звук подбора предмета
    
    static Resources& get() {
        static Resources instance;
        return instance;
    }
    
private:
    Resources();
    Resources(const Resources&) = delete;
    void operator=(const Resources&) = delete;
};