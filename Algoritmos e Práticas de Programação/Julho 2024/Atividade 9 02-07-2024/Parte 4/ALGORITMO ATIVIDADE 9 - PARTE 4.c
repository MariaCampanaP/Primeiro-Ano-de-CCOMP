#include <stdio.h>
#define TAMANHO_VETOR 18
#define LINHAS 3
#define COLUNAS 6
void ordenarVetor(int vetor[], int tamanho){
    int temp;
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = i + 1; j < tamanho; j++){
            if (vetor[i] > vetor[j]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}
int main(){
    int vet[TAMANHO_VETOR];
    int matriz[LINHAS][COLUNAS];
    printf("Digite 18 elementos para o vetor:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    ordenarVetor(vet, TAMANHO_VETOR);
    int index = 0;
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            matriz[i][j] = vet[index];
            index++;
        }
    }
    printf("\nMatriz 3x6:\n");
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
