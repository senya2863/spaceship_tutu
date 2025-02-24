#include <iostream>
using namespace std;
class Spaceship {
  private:
    unsigned int hp; // здоровье
    unsigned int speed; // скорость
    unsigned int armor; // броня
}; //корабль
class Enemy {}; // враги
class Planet {}; // планеты
class Weapon {}; // оружие
class Mission {}; // миссии
class Game {
 private:
  Spaceship ship;
  Enemy enemies[unsigned int number_of_enemies];
  Mission mission[unsigned int number_of_missions];
  bool game_over;
 public:
   Game(): game_over(false) {};
   void game_start() {
     while (!game_over) {

     }
   };
   ~Game() {};
};  // логика игры

