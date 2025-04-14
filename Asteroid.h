#include "Enemy.h"
#include <SFML/Graphics.hpp>

class Asteroid : public Enemy {
public:
    Asteroid(float yPos, const sf::Texture& texture); // Добавлен параметр текстуры

    void update(float dt) override;
    void draw(sf::RenderWindow& window) const override;
    const sf::FloatRect getBounds() const override;
    bool isAlive() const override { return alive; }
    int getScoreValue() const override { return 50; }
    void takeDamage() override { alive = false; }

private:
    sf::Sprite sprite;
    float rotation = 0.0f;       // Текущий угол
    float rotationSpeed = 30.0f; // Скорость вращения (градусов/сек)
};