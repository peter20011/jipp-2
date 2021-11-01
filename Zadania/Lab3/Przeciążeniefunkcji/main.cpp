//
// Created by PW on 23.10.2021.
//

#include <iostream>
int pole(int a){ //kwadrat
    return a*a;
}
using namespace std;
int pole(int a, int h){ //trójkąt
    return a*h/2;
}
int main(){
    int a,h;
    cout<<"Wczytaj warosc dla a i b: "<<endl;
    cin>>a>>h;
    cout<<"Pole kwadratu wynosi: "<< pole(a)<<endl;
    cout<<"Pole trojkata wynosi: "<< pole(a,h)<<endl;

}
