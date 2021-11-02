//
// Created by PW on 02.11.2021.
//

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

class Prostopadloscian{
public:
    int a;
    int b;
    int H;

    int pole() {
        return a*b*H;
    }
};

class Kula{
public:
    int R;

    double objetosc(){
        return (4.0/3) * R * R * R * M_PI;
    }
};

class FunkcjaKwadratowa{
public:
    int a;
    int b;
    int c;

    void wyswietl() {
        printf("%dx^2 + %dx + %d\n",a,b,c);
    }
};

class Student{
public:
    string name;
    string lastName;
    int nr_al;
    int l_pyt;
    int pop_odp;

    double ile_proc(){
        return 100*pop_odp/(double)l_pyt;
    }

    string Name(){
        return name;
    }

    string LastName(){
        return lastName;
    }

    int NrAlbumu()
    {
        return nr_al;
    }

    int LiczbaPytan()
    {
        return l_pyt;
    }

    int PopOdp()
    {
        return pop_odp;
    }
};

int main()
{
    Prostopadloscian a;
    a.a=1;
    a.b=2;
    a.H=4;
    cout << a.pole() << endl;

    Kula b;
    b.R=2;
    cout << b.objetosc() << endl;

    FunkcjaKwadratowa c;
    c.a=3;
    c.b=4;
    c.c=5;
    c.wyswietl();

    Student d;
    d.l_pyt= 20;
    d.pop_odp= 5;
    cout << d.ile_proc() << endl;

    return 0;
}
