#include "Entity.hpp"
//наследуется от Entity
class Enemy:public Entity
{
private:
    
public:
    //конструктор наследуется от конструктора Entity
    Enemy(Pos stPos):Entity(stPos, 'E'){};//конструктор со стартовой позицией противника, символом E для отрисовки
    void updatePosition() override; //обновляет позицию противника в зависимости от алгоритма
};