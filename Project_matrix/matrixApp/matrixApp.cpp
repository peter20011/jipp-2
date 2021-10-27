//
// Created by PW on 24.10.2021.
//

#include "matrixLib.h"
#include <iostream>
using namespace  std;
int main(int argc, char* argv[]){

    if(argc==2)
    {
        if(strcmp(argv[1],"addMatrix")==0)
        {
            choice();
            int z;
            cin>>z;
                if(z==1)// int
                {
                    int m,n;
                    cout<<"Wczytaj ilość wierzy macieczy:"<<endl;
                    cin>>m;
                    cout<<"Wczytaj ilość kolumn macierzy:"<<endl;
                    cin>>n

                }
                else if(z==2)//double
                {

                }
                else
                {
                err();
                }
        }
    }
    else
    {
        err();
    }

}