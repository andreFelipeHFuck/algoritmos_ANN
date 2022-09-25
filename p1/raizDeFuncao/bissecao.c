#include <math.h>

#define PI 3.14159265358979323846

void bisection(double(*f)(double), double a, double b, int n){
    double fa = f(a);
    double fb = f(b);

    if(fa * fb >= 0){
        printf("Não pode usar este intervalo");
        return;
    }else{
        for(int i = 0; i < n; i++){
            double m = 0.5 * (a + b);
            double fm = f(m);

            if(fm == 0){
                printf("Você encontrou uma raiz r=%.16f\n", m);
            }
            
            if(n == i + 1){
                printf("%.9f, ",m);
            }

            if(fa * fm < 0){
                b = m;
            }else{
                a = m;
            }

        }
    }
}

double f(double x){
    return ;
}

int main(){
    double a = ;
    double b = ;

    int  nums[] = {};
    int tamanho = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i < tamanho; i++){
        bisection(f, a, b , nums[i]);
    }
}