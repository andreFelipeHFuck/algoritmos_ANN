#include <stdio.h>

#define numRows 3
#define numCols 4

#define N 8

int teste(int nums[N], int n){
    for(int i = 0; i < N; i++){
        if(nums[i] == n){
            return 1;
        }else{
            continue;
        }
    }
}

//so funciona para sistemas nxn
void jacobi(double E[numRows][numCols],double chute[numRows],int n, int nums[N]) {
    for(int i =0 ; i<n; i++) {
        double resp[numRows] = {};
        for(int j =0;j<numRows;j++) {
            double bj = E[j][numCols-1];
            double soma = 0;
            for(int k=0;k<numCols-1;k++) {
                if(k!=j) {
                    soma -= E[j][k] * chute[k];
                }
            }
            double xj = (bj + soma ) / E[j][j];
            resp[j] = xj;
            if(teste(nums, i+1) == 1){
                printf("%.10f, ", xj);
            }
        }
        for(int i = 0;i<numRows;i++) {
            chute[i]=resp[i];
        }
    }
    printf("\n");

}

int main() {

    double E[numRows][numCols] = {
        
    };

    double chute[numRows] = {};
    int n = ;

    int  nums_jacobi[] = {};
    int tamanho_posicaoFalsa = sizeof(nums_jacobi) / sizeof(nums_jacobi[0]);

    jacobi(E, chute, n, nums_jacobi);


    printf("\n");

    return 0;
}