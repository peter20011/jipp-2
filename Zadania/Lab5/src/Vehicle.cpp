//
// Created by PW on 13.11.2021.
//

#include "Vehicle.h"
#include <string.h>

double Vehicle::newest_software_version = 3.12;

Vehicle::Vehicle(int Register_Number, string Name, int Number_Of_Seats, char* Owner, string Brand, string Type){
    register_number = Register_Number;
    name = Name;
    number_of_seats = Number_Of_Seats;
    owner = new char[20];
    strcpy(owner, Owner);
    brand = Brand;
    type = Type;
}

Vehicle::~Vehicle() {
    delete [] owner;
}

void Vehicle::print_data(){
    cout << register_number << endl;
    cout << name << endl;
    cout << number_of_seats << endl;
    cout << owner << endl;
    cout << brand << endl;
    cout << type << endl;
}

void Vehicle::print_software_version() {
    cout << "Zainstalowana wersja oprogramowania: " << installed_software_version << endl;
}

void Vehicle::update_software() {
    installed_software_version = newest_software_version;
}

void Vehicle::release_new_software_version(double released_version) {
    newest_software_version = released_version;
    cout << "Najnowsze oprogramowanie: " << newest_software_version << endl;
}