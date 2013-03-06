#include "Map.h"

Map::Map(int row, int col, int tolerance, int * rawMap, Eigen::Vector2d startPos, Eigen::Vector2d goalPos):row(row), col(col), tolerance(tolerance),goal(goalPos),start(startPos),currentMap(new Eigen:: MatrixXd(row,col)){
    int index = 0;
    for(int crow = 0; crow<row; crow++){
        for(int ccol = 0; ccol<col; ccol++){
            if(rawMap[index]>=0){
            (*currentMap)(crow,ccol) = rawMap[index]/70;
            }
            else{
            (*currentMap)(crow,ccol) = -1;
            }
            index++;
        }
    }
}

Map::Map(int row, int col, int * rawMap, Eigen::Vector2d startPos, Eigen::Vector2d goalPos):Map(row, col, 70, rawMap, startPos, goalPos){}

Eigen::Vector2d Map::randPoint(){

    std::random_device generator;
    std::uniform_int_distribution<int> randRow(0,this->row);
    std::uniform_int_distribution<int> randCol(0,this->col);
    return Eigen::Vector2d(randRow(generator),randCol(generator));
}

Eigen::Vector2d Map::nearestPoint(Eigen::Vector2d refpt){

}

Eigen::Vector2d Map::goalPosition(){
    return this->goal;
}

Eigen::Vector2d Map::startPosition(){
    return this->start;
}

bool Map::inObstacle(Eigen::Vector2d & point){



}

void Map::mapDisplay(){


}
using namespace std;
int main(){
    int fakes[] = {10,-1,32,70,100,23};
    Map testing(2,3,fakes,Eigen::Vector2d(0,0),Eigen::Vector2d(1,1));
    cout<<testing.row<<endl;
    cout<<testing.col<<endl;
    cout<< (*testing.currentMap) <<endl;
    for(int x = 0; x<30; x++){
    cout<<testing.randPoint();
    }
}
