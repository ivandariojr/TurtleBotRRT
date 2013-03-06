#include "Map.h"

Map::Map(int row, int col, int tolerance, int * rawMap, Eigen::Vector2d startPos, Eigen::Vector2d goalPos):row(row), col(col), tolerance(tolerance),goal(goalPos),start(startPos),currentMap(new Eigen:: MatrixXd(row,col)){
    int index = 0;
    for(int crow = 0; crow<row; crow++){
        for(int ccol = 0; ccol<col; ccol++){
            (*currentMap)(crow,ccol) = rawMap[index];
            index++;
        }
    }
}

Map::Map(int row, int col, int * rawMap, Eigen::Vector2d startPos, Eigen::Vector2d goalPos):Map(row, col, 70, rawMap, startPos, goalPos){}

Eigen::Vector2d Map::randPoint(){


}

Eigen::Vector2d Map::nearestPoint(Eigen::Vector2d refpt){

}

Eigen::Vector2d Map::goalPosition(){

}

bool Map::inObstacle(Eigen::Vector2d & point){


}

void Map::mapDisplay(){


}
