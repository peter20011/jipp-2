//
// Created by PW on 24.10.2021.
//

#ifndef JIPP_2_MATRIXLIB_H
#define JIPP_2_MATRIXLIB_H

// funkcje o typie int

int** addMatrix(int** A, int** B, int m, int n);

int** subtractMatrix(int** A, int** B, int m, int n);

int** multiplyMatrix(int** A, int** B, int m, int n, int s);

int** multiplyByScalar(int** A, int m, int n, int k);

int** transpozeMatrix(int** A, int m, int n);

int** powerMatrix(int** A, int m, int n, unsigned int p);

int determinantMatrix(int** A, int m, int n);

void powiel(int** A, int** de, int o);

bool matrixIsDiagonal(int** A, int m, int n);

void swap(int& A, int& B);

void sortRow(int* tab, int n);

void sortRowsInMatrix(int** t, int m, int n);

// funckje o typie double

double** addMatrix(double** A, double** B, int m, int n);

double** subtractMatrix(double** A, double** B, int m, int n);

double** multiplyMatrix(double** A, double** B, int m, int n, int s);

double** multiplyByScalar(double** A, int m, int n , double p);

double** transpozeMatrix(double** A, int m, int n);

double** powerMatrix(double** A, int m, int n, unsigned int p);

double determinantMatrix(double** A, int m, int n);

void powiel(double** A, double ** d, int g);

bool matrixIsDiagonal(double** A, int m, int n);

void swap(double& A, double &B);

void sortRow(double* t, int m);

void sortRowsInMatrix(double** t, int m, int n);



#endif //JIPP_2_MATRIXLIB_H
