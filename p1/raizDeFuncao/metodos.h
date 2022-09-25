#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define numRows
#define numColuns 

void bisection(double(*f)(double), double a, double b, int n);

void newton(double(*f)(double), double(*df)(double), double x0, int n);

void secante(double(*f)(double), double x0, double x1, int n);

void posicaoFalsa(double(*f)(double),  double a, double b, int n);

void fixed_point(double(*g)(double), double x0, int n);

//void gauss(double E[numRows][numColuns]);