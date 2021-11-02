//
// Created by PW on 02.11.2021.
//

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

class Punkt{
public:
    int x;
    int y;

    Punkt(int x, int y);
    double distance(Punkt a);
};

Punkt::Punkt(int x,int y){
    this->x=x;
    this->y=y;
}

double Punkt::distance(Punkt a){
    return sqrt(pow(a.x-this->x,2)+pow(a.y-this->y,2));
}

int main()
{

    return 0;
}