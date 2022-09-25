#include <math.h>

#define PI 3.14159265358979323846

void secante(double(*f)(double), double x0, double x1, int n){
    for(int i = 0; i < n; i++){
        double fx0 = f(x0);
        double fx1 = f(x1);

        if(fx0 == fx1){
            break;
        }
        double x2 = (x0 * fx1 - x1 * fx0) / (fx1 - fx0);

        if(n == i + 1){
            printf("%.16f, ", x2);
        }
  
        x0 = x1;
        x1 = x2;
    }
}

double f(double x){
    return ;
}

int main(){
    double x0 =  ;
    double x1 =  ;
    int  nums_secante[] = {};
    int tamanho_secante = sizeof(nums_secante) / sizeof(nums_secante[0]);

    for(int i = 0; i < tamanho_secante; i++){
        secante(f, x0, x1, nums_secante[i]);
    }
}