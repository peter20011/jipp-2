//
// Created by PW on 19.11.2021.
//

#ifndef JIPP_2_IMAGINARY_H
#define JIPP_2_IMAGINARY_H
#include <cmath>
#include <iostream>

class Imaginary {
private:
    double x, i;

public:
    Imaginary() {};

    Imaginary(double x, double i) : x(x), i(i) {};

    void print();

    friend Imaginary operator+(const Imaginary &lhs, const Imaginary &rhs) ;
    friend void operator+=(Imaginary &lhs, const Imaginary &rhs);
    friend Imaginary operator-(const Imaginary &lhs, const Imaginary &rhs);
    friend Imaginary operator-(const Imaginary &rhs);
    friend void operator-=(Imaginary &lhs, const Imaginary &rhs);
    friend Imaginary operator*(const Imaginary &lhs, const Imaginary &rhs);
    friend Imaginary operator*(const Imaginary &lhs, const double &rhs);
    friend Imaginary operator*(const double &lhs ,const Imaginary &rhs);
    friend bool operator==(const Imaginary &lhs, const Imaginary &rhs);
};
#endif //JIPP_2_IMAGINARY_H
