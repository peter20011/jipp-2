//
// Created by PW on 24.10.2021.
//

#include "matrixLib.h"
#include <iostream>
using namespace  std;

//funkccje o typie int
int** addMatrix(int** a, int** b, int m, int n)
{
    int **C= new int *[m];
    for(int i=0;i<m;i++)
    {
        C[i]=new int [n];
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

int** multiplyMatrix(int** a, int** b, int m, int n, int s)
{
int** E=new int*[m];
for(int i=0;i<m;i++)
{
  E[i]=new int[s];
}
for(int i=0;i<m;i++)
{
    for(int j=0;j<s;j++)
    {
        for(int x=0;x<n;x++)
        {
            E[i][j]=E[i][j]+a[i][j]*b[i][j];
        }
    }
}
return E;
}

int** multiplyByScalar(int** a, int m, int n, int k)
{
    int** F=new int*[m];
    for(int i=0;i<m;i++)
    {
        F[i]=new int[n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;i<n;j++)
        {
            F[i][j]=a[i][j]*k;
        }
    }
    return F;
}

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

void powiel(int**a, int** de, int g)
{
    for(int i=0;i<g;i++)
    {
        for(int j=0;j<g;j++){
            de[i][j]=a[i][j];
        }
    }
}

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


void sortRowsInMatrix(int** t, int m, int n)
{
for(int i=0;i<m;i++)
{
    sortRow(t[i],n);
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
    double** E=new double*[m];
    for(int i=0;i<m;i++)
    {
        E[i]=new double[s];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<s;j++)
        {
            for(int x=0;x<n;x++)
            {
                E[i][j]=E[i][j]+a[i][j]*b[i][j];
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
        for(int j=0;i<n;j++)
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
            cout << a[w][k] << " ";
        cout << endl;
    }
}

void saveMatrix(int**a,int m,int n)
{
    int w, k;
    for (w = 0; w < m; w++) {
        for (k = 0; k < n; k++) {
            cin >> a[w][k];
        }
    }
}

void saveMatrix(double**a,int m,int n)
{
    int w, k;
    for (w = 0; w < m; w++) {
        for (k = 0; k < n; k++) {
            cin >> a[w][k];
        }
    }
}