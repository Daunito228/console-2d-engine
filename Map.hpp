#pragma once
#include "coordinates.hpp"
#include <iostream>
#include <string>
enum Tile{
    WALL = '#',
    PLAYER = 'P',
    ENEMY = 'E',
    EMPTY = '.',
    EXIT = 'X'
};

class Map
{
private:
    int width; //ширина карты (по x)
    int length; //длина карты (по y)
    char** map; //двумерный массив с картой
public:
    Map(const std::string& filename); //конструктор с названием файла загрузки карты (.txt)
    ~Map(); //деструктор
    void loadMapFile(const std::string& filename); //метод загрузки карты с файла
    void render(); //отрисовка карты
    bool isWalkiable(Pos pos); //проверка является ли координата проходимой (есть ли там стена или что-то другое)
    char getTile(Pos tile); //get-метод для получения значения клетки
    void setTile(Pos tile, char ic); //set-метод для установления значения клетки
};