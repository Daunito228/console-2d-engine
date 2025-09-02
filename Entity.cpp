#include "Entity.hpp"

Entity::Entity(Pos startPos, char ic){
    pos = startPos;
    icon = ic;
}

Entity::~Entity(){}

Pos Entity::getPos(){
    return pos;
}

char Entity::getIcon(){
    return icon;
}

void Entity::setPos(Pos inpPos){
    pos = inpPos;
}
