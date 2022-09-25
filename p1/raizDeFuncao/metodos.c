#include "metodos.h"

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

void fixed_point(double(*f)(double), double x0, int n){
    double x1;
    for(int i=0; i < n; i++){
        x0 = f(x0);
        if(n == i + 1){
            printf("%.7f, ", x0);
        }
    }
}

