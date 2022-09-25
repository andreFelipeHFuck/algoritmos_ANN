#include <math.h>

#define PI 3.14159265358979323846

void newton(double(*f)(double), double(*df)(double), double x0, int n){
    for(int i = 0; i < n; i++){
        double dfx0 = df(x0);
        if(dfx0 == 0){
            break;
        }

        double xi = x0 - f(x0) / df(x0);
        if(n == i + 1){
            printf("%.16f, ", xi);
        }
        x0 = xi;
    }
}

double f(double x){
    return ;
}

double df(double df){
    return ;
}

int main(){
        double x0 = ;
    int  nums_newton[] = {};
    int tamanho_newton = sizeof(nums_newton) / sizeof(nums_newton[0]);

    for(int i = 0; i < tamanho_newton; i++){
        newton(f, df, x0, nums_newton[i]);
    }
}