//
// Created by PW on 23.10.2021.
//

#include<iostream>
#include<stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
int generuj(int a , int b)//generuje losowe liczby
{
    int m;
    m=(a+rand()%(b+1)-a);
    return m;
}

int naj(int t[],int w){//zwraca naj wartosc tablicy
    int a=t[0];
    for(int i=1;i<w;w++){
        if(t[i]>a){
            a=t[i];
        }
    }

    return a;
}

void odwrot(int t[],int s){
    for(int i=0;i<s/2;i++){
        swap(t[i],t[s-i-1]);
    }
}


int main(){
    srand(time(NULL));
    int a,b;
    cout<<"Wczytaj przedzial liczb"<<endl;
    do{
        cin>>a>>b;
    }
    while(a>=b);

    cout<<"Losowa liczba z przedziału "<<a<<" do "<<b<<" to "<<generuj(a,b)<<endl;



    /////////////////////////////////////////////


    cout<<"Losowa liczba z przedzialu "<<a<<" do "<<b<<" to "<<generuj(a,b)<<endl;

    cout<<"Generowanie losowych liczb do tablicy. Wczytaj wartosc: "<<endl;
    cin>>a;
    int* t= new int [a];
    for(int i=0;i<50;i++)
    {
        t[i]=generuj(1,100);
        cout<<t[i]<<" ";
    }
    cout<<"\n"<<endl<<naj(t,a)<<endl;

    odwrot(t,a);
    for(int i=0;i<a;i++){
        cout<<t[i]<<" ";
    }


}
