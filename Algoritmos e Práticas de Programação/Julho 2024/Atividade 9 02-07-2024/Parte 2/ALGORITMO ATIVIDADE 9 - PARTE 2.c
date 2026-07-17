#include <stdio.h>
int main() {
    int A[2][2];
    int B[2][2];
    int i, j;
    int maior;
    printf("Preencha a matriz 2x2 com valores inteiros:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    maior = A[0][0];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (A[i][j] > maior) {
                maior = A[i][j];
            }
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            B[i][j] = A[i][j] * maior;
        }
    }
    printf("\nMatriz A:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nO maior valor da matriz A e: %d\n", maior);
    printf("\nMatriz B (A * maior valor de A):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
