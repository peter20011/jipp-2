//
// Created by PW on 24.10.2021.
//

#include "matrixLib.h"
#include <iostream>
using namespace  std;
//dopisac funckje powiel
//funkccje o typie int
int** addMatrix(int** A, int** B, int m, int n)
{
    int **C= new int *[m]; // dynamiczna alokacja tablicy wynikowej
    for(int i=0;i<m;i++)
    {
        C[i]=new int [n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    return C;
}

int** subtractMatrix(int** A, int** B, int m, int n)
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
            D[i][j]=A[i][j]-B[i][j];
        }
    }

return D;
}

int** multiplyMatrix(int** A, int** B, int m, int n, int s)
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
            E[i][j]=E[i][j]+A[i][j]*B[i][j];
        }
    }
}
return E;
}

int** multiplyByScalar(int** A, int m, int n, int k)
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
            F[i][j]=A[i][j]*k;
        }
    }
    return F;
}

int** transpozeMatrix(int** A, int m, int n)
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
            G[j][i]=A[i][j];
        }
    }

    return G;
}

int** powerMatrix(int** A, int m, int n, unsigned int p)
{
    int** H=new int *[n];
    for(int i=0;i<m;i++)
    {
        H[i] = new int[m];
    }

    int**I;

    powiel(A,H,m);

    for(int i=0;i<p-1;i++)
    {
        I= multiplyMatrix(A,H,m,m,m);
        powiel(I,H,m);

        for(int i=0;i<m;i++)
        {
            delete [] I[i];
        }
        delete [] I;
    }

    return H;
}

//funkcje typu void\(int)\bool

void powiel(int**A, int** de, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            de[i][j]=A[i][j];
        }
    }
}

bool matrixisDiagonal(int** A,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((j!=i) && (A[i][j]!=0))
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
