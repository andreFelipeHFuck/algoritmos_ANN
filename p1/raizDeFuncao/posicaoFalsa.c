#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

void posicaoFalsa(double (*f)(double), double a, double b, int n) {
	for (int i = 0; i < n; i++) {
		double fa = f(a);
		double fb = f(b);
		if (fa * fb >= 0) {
            //printf("%.16f, ",a);
			break;
		}
		double x = (a * fb - b * fa) / (fb - fa);

        if(n == i + 1){
            printf("%.16f, ", x);
        }

        if(x == 0){
            printf("%.16f, ", x);
        }

		double fx = f(x);

      
        if (fa * fx < 0) {
            b = x;
            fb = fx;
        } else {
            a = x;
            fa = fx;
        }
        
	}
}

double f(double x){
    return ;
}

int main(){
    double x0 =  ;
    double x1 =  ;
    int  nums_posicaoFalsa[] = {};
    int tamanho_posicaoFalsa = sizeof(nums_posicaoFalsa) / sizeof(nums_posicaoFalsa[0]);

    for(int i = 0; i < tamanho_posicaoFalsa; i++){
        posicaoFalsa(f, x0, x1, nums_posicaoFalsa[i]);
    }
}