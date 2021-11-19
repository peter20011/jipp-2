//
// Created by PW on 19.11.2021.
//

#ifndef JIPP_2_NODE_H
#define JIPP_2_NODE_H
#include <iostream>

class Node{
private:
    double x, y;

public:
    Node();
    Node(double x, double y) : x(x), y(y) {};
    double getX() const;
    double getY() const;
    void setX(const double& a);
    void setY(const double& a);
    friend std::ostream& operator<<(std::ostream &lhs, const Node &rhs);
};
#endif //JIPP_2_NODE_H
