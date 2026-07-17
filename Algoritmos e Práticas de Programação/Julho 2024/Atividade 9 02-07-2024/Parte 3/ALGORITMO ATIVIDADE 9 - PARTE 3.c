#include <stdio.h>
#define LINHAS 3
#define COLUNAS 4
int main(){
    int A[LINHAS][COLUNAS];
    int B[LINHAS][COLUNAS];
    printf("Digite os elementos da matriz A 3x4:\n");
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            if (A[i][j] % 2 == 0){
                B[i][j] = A[i][j] * 2;
            }else{
                B[i][j] = A[i][j] * 3;
            }
        }
    }
    printf("\nMatriz B:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
return 0;
}
