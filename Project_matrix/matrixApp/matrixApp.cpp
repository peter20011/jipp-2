//
// Created by PW on 24.10.2021.
//

#include "matrixLib.h"
#include <iostream>

using namespace  std;
int main(int argc, char* argv[]) {

    if (argc == 2) {
        //dodawanie

        if (strcmp(argv[1], "addMatrix") == 0) {
            choice();
            int z;
            cin >> z;
            if (z == 1)  //int
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                int **A;
                int **B;
                A = allocation(m, n);
                B = allocation(m, n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);
                cout << "Wczytaj wartosci do macierzy B:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(B, m, n);
                int **C;
                C = addMatrix(A, B, m, n);
                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Macierz B" << endl;
                printMatrix(B, m, n);
                cout << "Macierz wynikowa:" << endl;
                printMatrix(C, m, n);

                //delate
                delMatrix(A, m);
                delMatrix(B, m);
                delMatrix(C, m);

            } else if (z == 2) {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                double **A;
                double **B;
                A = allocations(m, n);
                B = allocations(m, n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);
                cout << "Wczytaj wartosci do macierzy B:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(B, m, n);
                double **C;
                C = addMatrix(A, B, m, n);
                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Macierz B" << endl;
                printMatrix(B, m, n);
                cout << "Macierz wynikowa:" << endl;
                printMatrix(C, m, n);

                //delate
                delMatrix(A, m);
                delMatrix(B, m);
                delMatrix(C, m);
            }

        }


        //odejmowanie

        if (strcmp(argv[1], "subtractMatrix") == 0) {

            choice();
            int z;
            cin >> z;
            if (z == 1)  //int
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy pierwszej :" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy pierwszej :" << endl;
                n = check();
                int **A;
                int **B;
                A = allocation(m, n);
                B = allocation(m, n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);
                cout << "Wczytaj wartosci do macierzy B:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(B, m, n);
                int **C;
                C = subtractMatrix(A, B, m, n);
                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Macierz B" << endl;
                printMatrix(B, m, n);
                cout << "Macierz wynikowa:" << endl;
                printMatrix(C, m, n);

                //delate
                delMatrix(A, m);
                delMatrix(B, m);
                delMatrix(C, m);

            } else if (z == 2) {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                double **A;
                double **B;
                A = allocations(m, n);
                B = allocations(m, n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);
                cout << "Wczytaj wartosci do macierzy B:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(B, m, n);
                double **C;
                C = subtractMatrix(A, B, m, n);
                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Macierz B" << endl;
                printMatrix(B, m, n);
                cout << "Macierz wynikowa:" << endl;
                printMatrix(C, m, n);

                //delate
                delMatrix(A, m);
                delMatrix(B, m);
                delMatrix(C, m);
            }
        }




        //mnożenie

        if (strcmp(argv[1], "multiplyMatrix") == 0) {
            choice();
            int z;
            cin >> z;
            if (z == 1)  //int
            {
                int m, n,s;
                cout << "Wczytaj ilosc wierzy macieczy pierwszej:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy pierwszej:" << endl;
                n=check();
                cout << "Wczytaj ilosc kolumn macieczy drugiej:" << endl;
                s=check();

                int **A;
                int **B;
                A = allocation(m, n);
                B = allocation(n, s);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);
                cout << "Wczytaj wartosci do macierzy B:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(B, n, s);
                int **E;
                E = multiplyMatrix(A, B, m, n,s);
                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Macierz B" << endl;
                printMatrix(B, n, s);
                cout << "Macierz wynikowa:" << endl;
                printMatrix(E, m, s);

                //delate
                delMatrix(A, m);
                delMatrix(B, n);
                delMatrix(E, m);

            }
            else if (z == 2) {
                int m, n,s;
                cout << "Wczytaj ilosc wierzy macieczy pierwszej:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy pierwszej:" << endl;
                n=check();
                cout << "Wczytaj ilosc kolumn macieczy drugiej:" << endl;
                s=check();

                double **A;
                double **B;
                A = allocations(m, n);
                B = allocations(n, s);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);
                cout << "Wczytaj wartosci do macierzy B:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(B, n, s);
                double **E;
                E = multiplyMatrix(A, B, m, n,s);
                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Macierz B" << endl;
                printMatrix(B, n, s);
                cout << "Macierz wynikowa:" << endl;
                printMatrix(E, m, s);

                //delate
                delMatrix(A, m);
                delMatrix(B, n);
                delMatrix(E, m);
            }
        }

        // scalar

        if (strcmp(argv[1], "multiplyBytScalar") == 0){
                choice();
                int z;
                cin >> z;
                if(z==1)
                {
                    int m, n, k;
                    cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                    m = check();
                    cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                    n = check();
                    cout<<"Wczytaj wartosc scalara:"<<endl;
                    k=check();
                    int **A;
                    A= allocation(m,n);

                    cout << "Wczytaj wartosci do macierzy A:" << endl;
                    cout << "Macierz wczytywana jest wierszami" << endl;
                    saveMatrix(A, m, n);


                    int **F;
                    F=multiplyByScalar(A,m,n,k);
                    cout << "Macierz A" << endl;
                    printMatrix(A, m, n);
                    cout<<"Skalar wynosi "<<k<<endl;
                    cout << "Macierz wynikowa" << endl;
                    printMatrix(F,m, n);

                    delMatrix(F,m);
                    delMatrix(A,m);
                }
                else if(z==2)
                {
                    int m, n;
                    double k;
                    cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                    m = check();
                    cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                    n = check();
                    cout<<"Wczytaj wartosc scalara:"<<endl;
                    k=check_double();
                    double **A;
                    A= allocations(m,n);

                    cout << "Wczytaj wartosci do macierzy A:" << endl;
                    cout << "Macierz wczytywana jest wierszami" << endl;
                    saveMatrix(A, m, n);


                    double **F;
                    F=multiplyByScalar(A,m,n,k);
                    cout << "Macierz A" << endl;
                    printMatrix(A, m, n);
                    cout<<"Skalar wynosi "<<k<<endl;
                    cout << "Macierz wynikowa" << endl;
                    printMatrix(F,m, n);

                    delMatrix(F,m);
                    delMatrix(A,m);
                }
        }

        //transponowanie

        if (strcmp(argv[1], "transpozeMatrix") == 0)
        {
            choice();
            int z;
            cin >> z;
            if(z==1)
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                int **A;
                A= allocation(m,n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);

                int **G;
                G= transpozeMatrix(A,m,n);

                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Transponowana macierz A" << endl;
                printMatrix(G,m,n);

                delMatrix(G,m);
                delMatrix(A,m);

            }

            else if(z==2)
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                double **A;
                A= allocations(m,n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);

                double **G;
                G= transpozeMatrix(A,m,n);

                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Transponowana macierz A" << endl;
                printMatrix(G,m,n);

                delMatrix(G,m);
                delMatrix(A,m);

            }
        }
        if (strcmp(argv[1], "powerMatrix") == 0){
            choice();
            int z;
            cin >> z;
            if(z==1)
            {
                int m, n;
                unsigned int p;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                cout << "Wczytaj stopien potegi:" << endl;
                p = check();
                int **A;
                A= allocation(m,n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);

                int **H;
                H= powerMatrix(A,m,n,p);

                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Macierz podniesiona do potegi "<< p << endl;
                printMatrix(H,m,n);

                delMatrix(H,m);
                delMatrix(A,m);

            }
            else if(z==2)
            {
                int m, n;
                unsigned int p;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                cout << "Wczytaj stopien potegi:" << endl;
                p = check();
                double **A;
                A= allocations(m,n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);

                double **H;
                H= powerMatrix(A,m,n,p);

                cout << "Macierz A" << endl;
                printMatrix(A, m, n);
                cout << "Macierz podniesiona do potegi "<< p << endl;
                printMatrix(H,m,n);

                delMatrix(H,m);
                delMatrix(A,m);
            }
        }
        if (strcmp(argv[1], "determinantMatrix") == 0){
            choice();
            int z;
            cin >> z;
            if(z==1)
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                int **A;
                A= allocation(m,n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);

                int det;
                det= determinantMatrix(A,m,n);

                cout << "Macierz A" << endl;
                printMatrix(A, m, n);

                cout<<"Wartosc wyznacznika wynosi "<<det<<endl;

                delMatrix(A,m);

            }
            else if(z==2)
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                double **A;
                A= allocations(m,n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);

                double det;
                det= determinantMatrix(A,m,n);

                cout << "Macierz A" << endl;
                printMatrix(A, m, n);

                cout<<"Wartosc wyznacznika wynosi "<<det<<endl;
                delMatrix(A,m);
            }
        }
        if (strcmp(argv[1], "matrixIsDiagonal") == 0){
            choice();
            int z;
            cin >> z;
            if(z==1){
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                int **A;
                A= allocation(m,n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);

                cout << "Macierz A" << endl;
                printMatrix(A, m, n);

                if(matrixIsDiagonal(A,m,n)){
                    cout<<"Macierz A jest diagonalna"<<endl;
                }
                else{
                    cout<<"Macierz A nie jest diagonalna"<<endl;
                }
                delMatrix(A,m);
            }
            else if(z==2)
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                double **A;
                A= allocations(m,n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);

                cout << "Macierz A" << endl;
                printMatrix(A, m, n);

                if(matrixIsDiagonal(A,m,n)){
                    cout<<"Macierz A jest diagonalna"<<endl;
                }
                else{
                    cout<<"Macierz A nie jest diagonalna"<<endl;
                }
                delMatrix(A,m);
            }
        }
        if (strcmp(argv[1], "sortRow") == 0){
            choice();
            int z;
            cin >> z;
            if(z==1)
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                m = check();
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                n = check();
                int **A;
                A= allocation(m,n);

                cout << "Wczytaj wartosci do macierzy A:" << endl;
                cout << "Macierz wczytywana jest wierszami" << endl;
                saveMatrix(A, m, n);
            }
            else if(z==2)
            {

            }
        }

    }
}