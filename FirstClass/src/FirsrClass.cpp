//
// Created by PW on 25.10.2021.
//


#ifndef JIPP_2_LABS_FIRSTCLASS_H
#define JIPP_2_LABS_FIRSTCLASS_H
#include <iostream>
#include "FirsrClass.h"

void FirsrClass::printName() {
    cout << firstName << " " << lastName << endl;
}

void FirsrClass::printSizeData() {
    cout << "Foot size:" << footSize <<endl;
    cout << "Tall: " << tall << endl;
}

void FirsrClass::printAllData() {
    printName();
    printSizeData();
}

FirsrClass::FirsrClass(string firstName, string lastName, unsigned short footSize, unsigned short tall)
        : lastName(lastName), footSize(footSize), tall(tall){
    this->firstName = firstName;
}

void FirsrClass::setTall(unsigned short tall) {
    this->tall = tall;
}

unsigned short FirsrClass::getFootSize() {
    return footSize;
}