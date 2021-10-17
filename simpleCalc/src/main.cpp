//
// Created by PW on 16.10.2021.
//
#include <iostream>
#include <string>
#include <cstring>
#include "calc.h"

using namespace std;

int main(int argc, char* argv[]) {
    int a, b, h, H;

  if(argc==6){
      if(strcmp(argv[1],"volume")==0){
          a=stoi(argv[2]);
          b=stoi(argv[3]);
          h=stoi(argv[4]);
          H=stoi(argv[5]);
          cout<<"Objetosc wynosi: "<< volume(a,b,h,H)<<endl;
      }
      else{
          err();
          help();
      }
  }
  else{
      err();
      help();
  }

  if(argc==4) {
      if (strcmp(argv[1], "add") == 0) {
          a = stoi(argv[2]);
          b = stoi(argv[3]);
          cout << "Dodawanie: " << add(a, b) << endl;
      } else if (strcmp(argv[1], "subtract") == 0) {
          a = stoi(argv[2]);
          b = stoi(argv[3]);
          cout << "Odejmowanie: " << subtract(a, b) << endl;
      } else {
          err();
          help();
      }
  }


    if(argc==2){
        if(strcmp(argv[1],"help")==0){
            help();
        }
        else{
            err();
            help();
        }

    }
    else{
        err();
        help();}
}