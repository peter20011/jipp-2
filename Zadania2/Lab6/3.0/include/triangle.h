//
// Created by PW on 19.11.2021.
//

#ifndef JIPP_2_TRIANGLE_H
#define JIPP_2_TRIANGLE_H
#include "node.h"
#include <string>

class Triangle
{
private:
    Node a, b, c;
    std::string nazwa;

public:
    Triangle();
    Triangle(Node a, Node b, Node c, std::string nazwa) : a(a), b(b), c(c), nazwa(nazwa){};
    std::string getNazwa() const;
    void setNazwa(std::string nazwa);
    void display() const;
    friend std::ostream &operator<<(std::ostream &lhs, const Triangle &rhs);
    double distance(int firstPointIndex, int secondPointIndex) const;
    void showTriangleData(Triangle triangle);
    void showTriangleData(Triangle& triangle);
    void showTriangleData(Triangle* triangle);
};

#endif //JIPP_2_TRIANGLE_H
