//
// Created by PW on 16.10.2021.
//
#include <iostream>
#include "calc.h"
using namespace  std;

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

double volume(double a, double b, double h, double H){
    return ((a+b)*h/2)*H;
}

void help(){
    cout <<"\nDokumentacja:\n";
    cout<<"Mozliwe dzialania: \n";
    cout<<"# add [a] [b]\n";
    cout<<"\t\t dodawanie dwoch liczb calkowitych [a] i [b]\n\n";

    cout<<"# subtract [a] [b]\n";
    cout<<"\t\t odejmowanie dwoch liczb calkowitych [a] i [b]\n\n";

    cout<<"# volume [a] [b] [h] [H]\n";
    cout<<"\t\tobliczanie objetosci graniastoslupa prostego o podstawie trapezu\n";
    cout<<"\t\t[a]-dlugosc podstawy trapezu\n";
    cout<<"\t\t[b]-dlugosc podstawy trapezu\n";
    cout<<"\t\t[h]-wysokosc trapezu\n";
    cout<<"\t\t[H]-wysokosc graniastoslupa\n";

    cout<<"# help\n";
    cout<<"\t\twyswietlanie dokumentacji\n";
}

void err(){
cout<<"Blad\n";
cout<<"Zapoznaj sie z dokumentacja\n";
}
