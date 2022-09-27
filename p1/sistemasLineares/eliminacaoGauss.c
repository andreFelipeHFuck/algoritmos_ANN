#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROWS 4
#define COLS 5


void print_matrix(double m[ROWS][COLS]){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%.9f\t", m[i][j] );
        }
        printf("\n");
    }
}

// Só funciona para sistema n x n
void gauss(double E[ROWS][COLS]){
    for(int j = 0; j < COLS - 2; j++){ 
		for(int i = j; i < ROWS; i++){
			if(E[i][j] != 0){
				if(i != j){
					for(int k = 0; k < COLS; k++){
						double temp = E[i][k];
						E[i][k] = E[j][k];
						E[j][k] = temp;
					}
				}
				for(int m = j+1; m < ROWS; m++){
					double a = -E[m][j]/ E[j][j];
					for(int n = j; n < COLS; n++){
						E[m][n] += a * E[j][n];
					}
				}
				print_matrix(E);
				printf("\n");
				break;
			}
		}
	}

    for(int i = 0; i < ROWS; i++){
        double xi = E[i][COLS - 1] / E[i][i];
        printf("x-%d = %.16f\n", i + 1, xi);
        
    }
}

int main(){
    double E[ROWS][COLS] = {
        
    };

    print_matrix(E);

   gauss(E);
}
