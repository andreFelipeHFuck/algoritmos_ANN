#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define numRows 
#define numCols 

#define N 

int teste(int nums[N], int n){
    for(int i = 0; i < N; i++){
        if(nums[i] == n){
            return 1;
        }else{
            continue;
        }
    }
}

void seidel(double E[numRows][numCols], double chute[numCols], int n, int nums[N]){
    for(int i=0; i < n; i++){
        double resp[numRows] = {};
        for(int j=0; j < numRows; j++){
            double bj = E[j][numCols - 1];
            double soma = 0;
            for(int k=0; k < numCols - 1; k++){
                if(k != j){
                    soma -= E[j][k] * chute[k];
                }
            }
            double xj = (bj + soma) / E[j][j];
            chute[j] = xj;
            if(teste(nums, i+1) == 1){
                printf("%.10f, ", xj);
            }
        }
    }
}

int main(){
    double E[numRows][numCols] = {
        
    };

    double chute[numCols] = {};
    int n = 25;

    int  nums_seidel[] = { }; // N é defininido pelo número de elementos na lista

    seidel(E, chute, n, nums_seidel);

    printf("\n");
}