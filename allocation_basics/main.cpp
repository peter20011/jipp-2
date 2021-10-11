//
// Created by PW on 11.10.2021.
//

#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
    cout<<argv[1]<<endl;
    for(int i = 0; i < argc ; ++i) {
        cout << argv[i] <<endl;
    }
    int *n= new int;
    int tab3[5]={3,2,1};
    int k;
    cout<<n<<endl<<*n<<&n<<endl<<&k<<endl;
    delete n;

    int *tab=new int[5];
    delete[] tab;

    int **tab2=new int*[5];

    for (int i = 0; i < 5; ++i) {
       tab2[i]=new int[5];
    }

    for(int i=0;i<5;++i) {
        delete[] tab2[i];
    }
        return 0;
}