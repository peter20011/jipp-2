//
// Created by PW on 24.10.2021.
//

#include "matrixLib.h"
#include <iostream>
#include <limits>
#include <math.h>

using namespace  std;

//funkccje o typie int

/**
 * Funkcja odpowiadająca za dodawanie macierzy
 * @param a wskaznik do pierwszej macierzy
 * @param b wskaznik do drugiej macierzy
 * @param m ilosc wierszy
 * @param n ilosc kolumn
 * @return wskazmik do macierzy C
 */
int** addMatrix(int** a, int** b, int m, int n)
{
    int **C;
    C= allocation(m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=a[i][j]+b[i][j];
        }
    }

   return C;
}
/**
 * Funkcja odpowiadająca za odejmowanie macierzy
 * @param a wskaznik do  macierzy a
 * @param b wskaznik do  macierzy b
 * @param m ilosc wierszy
 * @param n ilosc kolumn
 * @return wskazmik do  macierzy D
 */
int** subtractMatrix(int** a, int** b, int m, int n)
{
    int **D= new int *[m]; // dynamiczna alokacja tablicy wynikowej
    for(int i=0;i<m;i++)
    {
    D[i]=new int [n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            D[i][j]=a[i][j]-b[i][j];
        }
    }

return D;
}
/**
 * Funkcja odpowiadająca za mnozenie macierzy
 * @param a wskaznik do  macierzy a
 * @param b wskaznik do  macierzy b
 * @param m ilosc wierszy pierwszej macierzy
 * @param n ilosc kolumn pierwszej macierzy
 * @param s ilosc kolumn drugiej macierzy
 * @return wskazmik do  macierzy E
 */
int** multiplyMatrix(int** a, int** b, int m, int n, int s)
{ int z;
int** E=new int*[m];
for(int i=0;i<m;i++)
{
  E[i]=new int[s];
}
    for( int i = 0; i < m; i++ )
    {
        for (int j = 0; j < s; j++)
        {
             z=0;
            for (int k = 0; k < n; k++)
            {
                z += a[i][k] * b[k][j];
                E[i][j] = z;
            }

        }
    }
return E;
}
/**
 * Funkcja odpowiadająca za pomnozenie macierzy przez skalar
 * @param a wskaznik do  macierzy a
 * @param m ilosc wierszy
 * @param n ilosc kolumn
 * @param k wartosc skalara
 * @return wskaznik do  macierzy F
 */
int** multiplyByScalar(int** a, int m, int n, int k)
{
    int** F=new int*[m];
    for(int i=0;i<m;i++)
    {
        F[i]=new int[n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) {
            F[i][j] = a[i][j] * k;
        }
    }
    return F;
}
/**
 * Funkcja odpowiadajaca za transponowanie macierzy
 * @param a wskaznik do  macierzy a
 * @param m ilosc wierszy
 * @param n ilosc kolumn
 * @return wskaznik do macierzy G
 */
int** transpozeMatrix(int** a, int m, int n)
{
    int** G=new int *[n];
    for(int i=0;i<n;i++)
    {
        G[i]=new int[m];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            G[j][i]=a[i][j];
        }
    }

    return G;
}
/**
 * Funkcja odpowiadajaca za potegowanie macierzy
 * @param a wskaznik do  macierzy a
 * @param m ilosc wierszy
 * @param n ilosc kolumn
 * @param p stopien potegi
 * @return wskaznik do nowej macierzy
 */
int** powerMatrix(int** a, int m, int n, unsigned int p)
{
    int** H=new int *[n];
    for(int i=0;i<m;i++)
    {
        H[i] = new int[m];
    }

    int**I;

    powiel(a,H,m);

    for(int i=0;i<p-1;i++)
    {
        I= multiplyMatrix(a,H,m,m,m);
        powiel(I,H,m);

        for(int i=0;i<m;i++)
        {
            delete [] I[i];
        }
        delete [] I;
    }

    return H;
}
/**
 * Funkcja odpowiadajaca za obliczenie wyznacznika macierzy
 * @param a wskaznik do pierwszej macierzy
 * @param m ilosc wierszy
 * @param n ilosc kolumn
 * @return wartosc wyznacznika
 */
int determinantMatrix(int** a, int m, int n)// m=n
{
    int det = 0;

    int** su=new int*[m];
    for(int i=0;i<m;i++)
        su[i]=new int[m];

    if (m==2)
        return ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
    else {
        for (int x = 0; x <  m; x++) {
            int si = 0;
            for (int i = 1; i < m; i++) {
                int sj = 0;
                for (int j = 0; j < m; j++) {
                    if (j == x)
                    {
                        continue;
                    }
                    su[si][sj] = a[i][j];
                    sj++;
                }
                si++;
            }
            det = det + (pow(-1, x) * a[0][x] * determinantMatrix(su, n-1, 0));
        }
    }

    for(int i=0;i<n;i++)
        delete [] su[i];
    delete [] su;

    return det;
}

//funkcje typu void\(int)\bool
/**
 * Funkcja odpowiadajca za koiowanie macierzy
 * @param a wskaznik do pierwszej macierzy
 * @param dest wskaznik do drugiej macierzy
 * @param k ilosc powtorzen
 */
void powiel(int**a, int** dest, int k)
{
    for(int i=0;i<k;i++)
        for(int j=0;j<k;j++)
        {
            dest[i][j]=a[i][j];
        }

}
/**
 * Funkcja odpowiadajaca za sprawdzenie czy macierz jest diagonalna
 * @param a wskaznik do pierwszej macierzy
 * @param m ilosc wierszy
 * @param n ilosc kolumn
 * @return
 */
bool matrixIsDiagonal(int** a,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((j!=i) && (a[i][j]!=0))
            {
                return false;
            }

        }
    }
    return true;
}

void swap(int& a, int& b)
{
    int tmp=a;
    a=b;
    b=tmp;
}

void sortRow(int* tab, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(tab[j]>tab[j+1])
            {
                swap(tab[j],tab[j+1]);
            }
        }
    }
}


void sortRowsInMatrix(int** a, int m, int n)
{
for(int i=0;i<m;i++)
{
    sortRow(a[i],n);
}
}


//funkccje o typie double

double** addMatrix(double** a, double** b, int m, int n)
{
    double **C= new double *[m];
    for(int i=0;i<m;i++)
    {
        C[i]=new double [n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=a[i][j]+b[i][j];
        }
    }

    return C;
}

double** subtractMatrix(double** a, double** b, int m, int n)
{
    double **D= new double *[m]; // dynamiczna alokacja tablicy wynikowej
    for(int i=0;i<m;i++)
    {
        D[i]=new double[n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            D[i][j]=a[i][j]-b[i][j];
        }
    }

    return D;
}

double** multiplyMatrix(double** a, double** b, int m, int n, int s)
{
    double z;
    double** E=new double*[m];
    for(int i=0;i<m;i++)
    {
        E[i]=new double[s];
    }
    for( int i = 0; i < m; i++ )
    {
        for (int j = 0; j < s; j++)
        {
            z=0;
            for (int k = 0; k < n; k++)
            {
                z += a[i][k] * b[k][j];
                E[i][j] = z;
            }

        }
    }
    return E;

}

double** multiplyByScalar(double** a, int m, int n, double p)
{
    double** F=new double*[m];
    for(int i=0;i<m;i++)
    {
        F[i]=new double[n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            F[i][j]=a[i][j]*p;
        }
    }
    return F;
}

double** transpozeMatrix(double** a, int m, int n)
{
    double** G=new double *[n];
    for(int i=0;i<n;i++)
    {
        G[i]=new double[m];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            G[j][i]=a[i][j];
        }
    }

    return G;
}

double** powerMatrix(double** a, int m, int n, unsigned int p)
{
    double** H=new double *[n];
    for(int i=0;i<m;i++)
    {
        H[i] = new double[m];
    }

    double**I;

    powiel(a,H,m);

    for(int i=0;i<p-1;i++)
    {
        I= multiplyMatrix(a,H,m,m,m);
        powiel(I,H,m);

        for(int i=0;i<m;i++)
        {
            delete [] I[i];
        }
        delete [] I;
    }

    return H;
}

double determinantMatrix(double** a, int m, int n)// m=n
{
    double det = 0;

    double** su=new double*[m];
    for(int i=0;i<m;i++)
        su[i]=new double[m];

    if (m==2)
        return ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
    else {
        for (int x = 0; x <  m; x++) {
            int si = 0;
            for (int i = 1; i < m; i++) {
                int sj = 0;
                for (int j = 0; j < m; j++) {
                    if (j == x)
                    {
                        continue;
                    }
                    su[si][sj] = a[i][j];
                    sj++;
                }
                si++;
            }
            det = det + (pow(-1, x) * a[0][x] * determinantMatrix(su, n-1, 0));
        }
    }

    for(int i=0;i<n;i++)
        delete [] su[i];
    delete [] su;

    return det;
}

//funkcje typu void\(double)\bool

void powiel(double**a, double** d, int g)
{
for(int i=0;i<g;i++)
{
    for(int j=0;j<g;j++)
    {
    d[i][j]=a[i][j];
    }
}
}

bool matrixIsDiagonal(double** a,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((j!=i) && (a[i][j]!=0))
            {
                return false;
            }

        }
    }
    return true;
}

void swap(double& a, double& b)
{
    double tmp=a;
    a=b;
    b=tmp;
}

void sortRow(double* t, int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(t[j]>t[j+1])
            {
                swap(t[j],t[j+1]);
            }
        }
    }
}


void sortRowsInMatrix(double** t, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        sortRow(t[i],n);
    }
}

//funkcje pomocnicze
void printMatrix(int **a, int m,int n)
{
    int w, k;
    for (w = 0; w < m; w++) {
        for (k = 0; k < n; k++)
            cout << a[w][k] << " ";
        cout << endl;
    }
}


void printMatrix(double**a,int m,int n)
{
    int w, k;
    for (w = 0; w < m; w++) {
        for (k = 0; k < n; k++)
            cout <<a[w][k] << "  ";
        cout << endl;
    }
}


void saveMatrix(int**a,int m,int n)
{
    int w, k;
    for (w = 0; w < m; w++) {
        for (k = 0; k < n; k++) {
            int save;
            save=check();
            a[w][k]=save;
        }
    }
}

void saveMatrix(double**a,int m,int n)
{
    int w, k;
    for (w = 0; w < m; w++) {
        for (k = 0; k < n; k++) {
            double save;
            save=check_double();
            a[w][k]=save;
        }
    }

}



void choice(){
    cout<<"Jaki rodzaj macierzy chcesz wczytac"<<endl;
    cout<<"Int wybierz 1"<<endl;
    cout<<"Double wybierz 2"<<endl;
}

void er(){
    cout<<"Blad\n";
    cout<<"Zapoznaj sie z dokumentacja\n";
}

void delMatrix(int** a, int m)
{
    for( int i = 0; i < m; ++i )
        delete [] a[ i ];

    delete [] a;
}

void delMatrix(double**a,int m)
{
    for( int i = 0; i < m; ++i )
        delete [] a[ i ];

    delete [] a;
}

int **allocation( int m, int n)
{
    int **a = new int* [ m ];

    for( int i = 0; i < m; ++i )
        a[ i ] = new int[ n ];

    return a;
}

double **allocations( int m, int n)
{
    double **a = new double* [ m ];

    for( int i = 0; i < m; ++i )
        a[ i ] = new double[ n ];

    return a;
}


int check(){
    unsigned int liczba;
    while(true)
    {
        cin >> liczba;
        if(cin.fail())
        {
            cout << "Blad" << endl;
            cout<<"Sprobuj ponownie"<<endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');

        }
        else{
            break;
        }
    }


    return liczba;

}

double check_double(){
    double liczba;
    while(true)
    {
        cin >> liczba;
        if(cin.fail())
        {
            cout << "Blad" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }
        else{
            break;
        }
    }


    return liczba;

}

void help(){
    cout<<"Dokumentacja-mozliwe operacje: "<<endl;
    cout<<"\t1.Dodawanie macierzy po dopisaniu komendy-""addMatrix"<<endl;
    cout<<"\t2.Odejmowanie macierzy po dopisaniu komendy-""subtractMatrix"<<endl;
    cout<<"\t3.Mnozenie macierzy po dopisaniu komendy-""multiplyMatrix"<<endl;
    cout<<"\t4.Mnozenie macierzy przez skalar po dopisaniu komendy-""multiplyByScalar"<<endl;
    cout<<"\t5.Transponowanie macierzy po dopisaniu komendy-""transpozeMatrix"<<endl;
    cout<<"\t6.Potegowanie macierzy po dopisaniu komendy-""powerMatrix"<<endl;
    cout<<"\t7.Obliczanie wyznacznika macierzy po dopisaniu komendy-""determinantMatrix"<<endl;
    cout<<"\t7.Obliczanie wyznacznika macierzy po dopisaniu komendy-""determinantMatrix"<<endl;
    cout<<"\t9.Sprawdzenie czy macierz jest diagonalna po dopisaniu komendy-""matrixIsDiagonal"<<endl;
    cout<<"\t10.Sortowanie wybranego wiersza macierzy po dopisaniu komendy-""sortRow"<<endl;
    cout<<"\t11.Sortowanie wszystkich wierszy macierzy po dopisaniu komendy-""sortRowsInMatrix"<<endl;
    cout<<"\t12.Wyswietlenie dokumentacji po podaniu koemndy-""help"<<endl;
    cout<<endl;

    cout<<"Macierz wczytywana jest odpowiednio wierszami"<<endl;
    cout<<"Opis funkcji z parametrami znajduje sie w pliku matrixLib.cpp"<<endl;
}