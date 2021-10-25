//
// Created by PW on 25.10.2021.
//

#include "FirsrClass.h"
#include <iostream>

using namespace std;

int main() {
    FirsrClass person("Jan", "Kowalski", 44, 136);

    person.printAllData();
    person.setTall(140);

    person.printAllData();
    cout << person.getFootSize() <<endl;

    return 0;
}
