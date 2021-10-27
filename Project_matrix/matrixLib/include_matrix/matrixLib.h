//
// Created by PW on 24.10.2021.
//

#ifndef JIPP_2_MATRIXLIB_H
#define JIPP_2_MATRIXLIB_H

// funkcje o typie int

int** addMatrix(int** a, int** b, int m, int n);

int** subtractMatrix(int** a, int** b, int m, int n);

int** multiplyMatrix(int** a, int** b, int m, int n, int s);

int** multiplyByScalar(int** a, int m, int n, int k);

int** transpozeMatrix(int** a, int m, int n);

int** powerMatrix(int** a, int m, int n, unsigned int p);

int determinantMatrix(int** a, int m, int n);

void powiel(int** a, int** de, int o);

bool matrixIsDiagonal(int** a, int m, int n);

void swap(int& a, int& b);

void sortRow(int* tab, int n);

void sortRowsInMatrix(int** t, int m, int n);

// funckje o typie double

double** addMatrix(double** a, double** b, int m, int n);

double** subtractMatrix(double** a, double** b, int m, int n);

double** multiplyMatrix(double** a, double** b, int m, int n, int s);

double** multiplyByScalar(double** a, int m, int n , double p);

double** transpozeMatrix(double** a, int m, int n);

double** powerMatrix(double** a, int m, int n, unsigned int p);

double determinantMatrix(double** a, int m, int n);

void powiel(double** a, double ** d, int g);

bool matrixIsDiagonal(double** a, int m, int n);

void swap(double& a, double &b);

void sortRow(double* t, int m);

void sortRowsInMatrix(double** t, int m, int n);



#endif //JIPP_2_MATRIXLIB_H
