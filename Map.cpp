#include "Map.hpp"

Map::Map(const std::string& filename){

}

Map::~Map(){
    if(map){
        for(int i=0; i<length;i++){
            if(map[i]){
                delete[] map[i];
                map[i]=nullptr;
            }
        }
        delete[] map;
        map = nullptr;
    }
}

char Map::getTile(Pos tile){
    return map[tile.y][tile.x];
}

void Map::setTile(Pos tile, char ic){
    map[tile.y][tile.x] = ic;
}