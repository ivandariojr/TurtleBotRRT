#ifndef MAP
#define MAP
#include <iostream>
#include <random>
#include <Eigen/Dense>

class Map{
public:
    Eigen::MatrixXd *currentMap;
    Eigen::Vector2d goal;
    Eigen::Vector2d start;
    int row;
    int col;
    double tolerance;

// public:

    Map(int row, int col, int tolerance, int * rawMap, Eigen::Vector2d startPos, Eigen::Vector2d goalPos);

    Map(int row, int col, int * rawMap, Eigen::Vector2d startPos, Eigen::Vector2d goalPos);

    Eigen::Vector2d randPoint();

    //requires rrt implementation
    //takes in a tree of points and searches for the closest point to 
    //the reference point
    Eigen::Vector2d nearestPoint(Eigen::Vector2d refpt);

    Eigen::Vector2d goalPosition();

    Eigen::Vector2d startPosition();

    Eigen::Vector2d startingPositions();

    bool inObstacle(Eigen::Vector2d & point);

    void mapDisplay();



};

#endif /*MAP.H*/
