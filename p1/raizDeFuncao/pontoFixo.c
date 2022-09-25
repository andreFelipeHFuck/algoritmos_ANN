#include <math.h>

#define PI 3.14159265358979323846

void fixed_point(double(*f)(double), double x0, int n){
    double x1;
    for(int i=0; i < n; i++){
        x0 = f(x0);
        if(n == i + 1){
            printf("%.7f, ", x0);
        }
    }
}

double g(double x){
    return ;
}

int main(){
    int n = ;
    double x0 = ;

    int  nums[] = {};
    int tamanho = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i < tamanho; i++){
         fixed_point(g, x0, nums[i]);
    }

}