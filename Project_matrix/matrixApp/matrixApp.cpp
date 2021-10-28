//
// Created by PW on 24.10.2021.
//

#include "matrixLib.h"
#include <iostream>
#include <limits>
using namespace  std;
int main(int argc, char* argv[]) {

    if (argc == 2) {
        if (strcmp(argv[1], "addMatrix") == 0) {
            choice();
            int z;
            cin >> z;
                    if (z == 1)  //int
                    {
                        int m, n;
                        cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                        cin >> m;
                        cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                        cin >> n;
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

                    }
                    else if(z==2)
                    {
                        int m, n;
                        cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                        cin >> m;
                        cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                        cin >> n;
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


        if (strcmp(argv[1], "subtractMatrix") == 0)
        {

            choice();
            int z;
            cin >> z;
            if (z == 1)  //int
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                cin >> m;
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                cin >> n;
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

            }
            else if(z==2)
            {
                int m, n;
                cout << "Wczytaj ilosc wierzy macieczy:" << endl;
                cin >> m;
                cout << "Wczytaj ilosc kolumn macierzy:" << endl;
                cin >> n;
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
    }
}