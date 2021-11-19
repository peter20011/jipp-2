//
// Created by PW on 19.11.2021.
//

#ifndef JIPP_2_AUTO_H
#define JIPP_2_AUTO_H
#include <iostream>

using namespace std;

class Auto{
private:
    string nrRej;
    string nazwa;
    int iloscMiejsc;
    string* tabImieNaz;
    string marka;
    string typ;

public:
    Auto(string nrRej, string nazwa, int iloscMiejsc, string marka, string typ);
    Auto(Auto &a);
    void Print() const;
    void zmienPas(int nrMiejsca, string info);
    string getNazwa();
    string getNrRej();
    string getMarka();
    string getTyp();
    void SetNazwa(string nazwa);
    void SetNrRej(string nrRej);
};
#endif //JIPP_2_AUTO_H
