//
// Created by PW on 19.11.2021.
//

#include "auto.h"
#include <iostream>

string Auto::najnowsza_wersja_oprogramowania="v1.0";

Auto::Auto(string nrRej, string nazwa, int iloscMiejsc, string marka, string typ)
{
    this->nrRej = nrRej;
    this->nazwa = nazwa;
    this->iloscMiejsc = iloscMiejsc;
    this->marka = marka;
    this->typ = typ;

    this->tabImieNaz = new string[iloscMiejsc];
}

Auto::Auto(Auto &a)
{
    this->nrRej = a.nrRej;
    this->nazwa = a.nazwa;
    this->iloscMiejsc = a.iloscMiejsc;
    this->marka = a.marka;
    this->typ = a.typ;

    this->tabImieNaz = new string[iloscMiejsc];
    for (int i = 0; i < iloscMiejsc; i++)
        tabImieNaz[i] = a.tabImieNaz[i];
}

void Auto::Print() const
{
    cout << "nrRej: " << nrRej << " nazwa: " << nazwa << " iloscMiejsc: " << iloscMiejsc << " marka: " << marka << " typ: " << typ << endl;
    cout << "Miejsca: \n";
    for (int i = 0; i < iloscMiejsc; i++)
        cout << tabImieNaz[i] << endl;
}

void Auto::zmienPas(int nrMiejsca, string info)
{
    tabImieNaz[nrMiejsca] = info;
}

string Auto::getNazwa()
{
    return nazwa;
}

string Auto::getNrRej()
{
    return nrRej;
}

string Auto::getMarka()
{
    return marka;
}

string Auto::getTyp()
{
    return typ;
}

void Auto::setNazwa(string nazwa)
{
    this->nazwa = nazwa;
}

void Auto::setNrRej(string nrRej)
{
    this->nrRej = nrRej;
}

void Auto::printSoft()
{
    cout << zainstalowana_wersja_oprogramowania << endl;
}

void Auto::updateSoft()
{
    zainstalowana_wersja_oprogramowania = najnowsza_wersja_oprogramowania;
}

void Auto::opublikujNoweOprogramowanie(const string newSoft)
{
    najnowsza_wersja_oprogramowania=newSoft;
}