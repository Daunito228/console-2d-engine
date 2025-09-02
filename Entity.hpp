#pragma once
#include "coordinates.hpp"

//абстрактный класс сущности (нужен только для наследования)
class Entity
{
protected:
    Pos pos; //позиция сущности
    char icon; //символ отрисовки
public:
    Entity(Pos startPos, char ic); //конструктор со стартовыми кордами, символом отрисовки
    ~Entity(); //деструктор 
    Pos getPos(); //get-метод для получения позиции сущности
    char getIcon(); //get-метод для получения символа сущности
    void setPos(Pos inpPos); //set-метод для установки позиции сущности
    void render(); //отрисовка сущности
    virtual void updatePosition(); //виртуальный метод для обновления позиции (для каждого наследуемого класса свой)
};

