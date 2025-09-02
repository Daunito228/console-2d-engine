#pragma once
#include "Player.hpp"
#include "Enemy.hpp"
#include "Map.hpp"
//смысл игры пока чисто не сталкиваться с Enemy. Возможно дополнение
class Game
{
private:
    bool isRunning; //должна ли игра быть запущена
    Player player; //игрок
    Map map; //карта
    Enemy* enemies; //массив противников
public:
    Game(const std::string& mapFilename); //конструктор с названием файла откуда грузить карту (.txt файлв)
    ~Game(); //деструктор
    void update(); //изменение позиций сущностей
    void render(); //вывод карты, игрока, противника в консоль
    void getInput(); //получение ввода от пользователя
    void run(); //лавный цикл с игрой
    void checkCollision(); //проверка столкновений игрока со стенами или врагами
};