#include "Entity.hpp"
//наследуется от Entity
class Player:public Entity
{
private:
    
public:
    //конструктор наследуется от конструктора Entity
    Player(Pos stPos):Entity(stPos, 'P'){};//конструктор со стартовой позицией игрока, символом P для отрисовки
    void updatePosition() override; //обновляет позицию игрока в зависимости от ввода с клавиатуры
};