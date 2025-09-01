#pragma once
struct Pos
{
    int x;
    int y;
    Pos& operator=(const Pos& other){
        if(this!=&other){
            x=other.x;
            y=other.y;
        }
        return *this;
    }
};