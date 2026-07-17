#include <stdio.h>
int main() {
    int matriz[3][3];
    int i, j;
    int maior;
    printf("Preencha a matriz 3x3 com valores inteiros maiores que zero:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            do {
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
                if (matriz[i][j] <= 0) {
                    printf("Por favor, insira um valor maior que zero.\n");
                }
            } while (matriz[i][j] <= 0);
        }
    }
    printf("\nNumeros da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    maior = matriz[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    printf("\nO maior valor da matriz é: %d\n", maior);
    return 0;
}
