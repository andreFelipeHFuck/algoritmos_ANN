#include "metodos.h"

double f(double x){
    return ;
}

double df(double x){
    return ;
}

double g(double x){
    return ;
}

int main(){
    double a =;
    double b =;

    int  nums[] = {};
    int tamanho = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i < tamanho; i++){
        bisection(f, a, b , nums[i]);
    }

    double x0 =;
    int  nums_newton[] = {};
    int tamanho_newton = sizeof(nums_newton) / sizeof(nums_newton[0]);

    for(int i = 0; i < tamanho_newton; i++){
        newton(f, df, x0, nums_newton[i]);
    }

    x0 =;
    double x1 =;
    int  nums_secante[] = {};
    int tamanho_secante = sizeof(nums_secante) / sizeof(nums_secante[0]);

    for(int i = 0; i < tamanho_secante; i++){
        secante(f, x0, x1, nums_secante[i]);
    }

    x0 =;
    x1 =;
    int  nums_posicaoFalsa[] = {};
    int tamanho_posicaoFalsa = sizeof(nums_posicaoFalsa) / sizeof(nums_posicaoFalsa[0]);

    for(int i = 0; i < tamanho_posicaoFalsa; i++){
        posicaoFalsa(f, x0, x1, nums_posicaoFalsa[i]);
    }

    int n = ;
    x0 = ;

    int  nums_pontoFixo[] = {};
    int tamanho_pontoFixo = sizeof(nums_pontoFixo) / sizeof(nums_pontoFixo[0]);

    for(int i = 0; i < tamanho; i++){
         fixed_point(g, x0, nums_pontoFixo[i]);
    }

    printf("\n");

}