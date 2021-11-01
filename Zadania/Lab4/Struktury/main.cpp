//
// Created by PW on 01.11.2021.
//
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;


struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    int masa;
};

int same_producent(samochod bnowy[],int n){
    int licznik=0;
    for(int i=1;i<n;i++)
    {
        if(bnowy[0].marka==bnowy[i].marka)
            licznik++;
    }
    return licznik;
}

int lower_year(samochod bnowy[], int n){
    int minimum=bnowy[0].rok_produkcji;
    int mini=0;
    for(int i=1;i<n;++i){
        if(bnowy[i].rok_produkcji<minimum){
            minimum=bnowy[i].rok_produkcji;
            mini=i;
        }
    }
    return mini;
}
int main()
{
    int ilosc=4;
    samochod bnowy[]={{"Mazda","RX-8",1999,"czerwwony",1310},
                      {"Audi","TT",2000,"szary",1280},{"Hiundai","Atos Prime",2003,"czerwony",890},
                      {"Ford","Focus",2001,"niebieski",1070}};
    cout << "Marka\tModel\tRok\tKolor\tMasa" << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < ilosc; i++)
    {
        cout << bnowy[i].marka << "\t" << bnowy[i].model << "\t" << bnowy[i].rok_produkcji <<  "\t" << bnowy[i].kolor <<"\t"<< bnowy[i].masa<< endl;
    }
    cout<<"Ilosc pojazdow o tej samej naziwe: \n";
    cout << same_producent(bnowy, 4) << endl;
    cout<<"Pojazd najmłodszy: \n";
    cout << lower_year(bnowy, 4) << endl;
}
