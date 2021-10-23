//
// Created by PW on 23.10.2021.
//

#include <iostream>
#include <cstdlib>

using namespace std;

void bobble(int tab[],int w){
    for(int i=0;i<w;i++)
        for(int j=0;j<w-i-1;j++)
            if(tab[j]>tab[j+1])
                swap(tab[j],tab[j+1]);
}


void zad4(int a,int *b){
    *b=a;
}

int main()
{
    int a,b;
    cout<<"Wczytaj dwie liczby: ";
    cin>>a>>b;
    int *a1=&a;
    int *b1=&b;
    cout<<*a1<<" "<<*b1<<endl;
    cout<<"Srednia wynosi: "<<(*a1+*b1)/2<<endl;


    /////////////////////////////////////////////////////////
    int *tab=new int [10];

    for(int i=0;i<10;i++){
        cout<<"Wczytaj "<<i<<" liczbe\n"<<endl;
        cin>>tab[i];
    }
    for(int i=0;i<10;i++){
        if(tab[i]>0){
            cout<<tab[i]<<" ";
        }
    }

    bobble(tab,10);
    cout<<"\n"

    for(int i=0;i<10;i++){
        cout<<tab[i]<<" ";
    }


    int x;
    cin>>x;

    int*w=new int;
    zad4(x,w);
    cout<<endl<<*w<<endl;
}