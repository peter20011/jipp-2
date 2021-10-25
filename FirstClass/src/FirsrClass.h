//
// Created by PW on 25.10.2021.
//

#ifndef JIPP_2_FIRSRCLASS_H
#define JIPP_2_FIRSRCLASS_H



#include <iostream>

using namespace std;

class FirsrClass {
private:
    string firstName;
    string lastName;
    unsigned short footSize = 0;
    unsigned short tall = 0;

    void printSizeData();

public:
    FirsrClass(string firstName, string lastName, unsigned short footSize, unsigned short tall);
    void printName();
    void printAllData();

    void setTall(unsigned short tall);

    unsigned short getFootSize();

};


#endif //JIPP_2_FIRSRCLASS_H
