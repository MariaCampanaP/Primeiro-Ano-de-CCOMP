#include <stdio.h>
int main(){
    int vetor[9];
    int i;
    printf("Digite 9 numeros inteiros\n");
    for(i = 0; i < 9; i++){
        printf("Digite o %d numero inteiro:", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\nNumeros pares e suas posicoes no vetor:\n");
    for(i = 0; i < 9; i++){
        if(vetor[i] % 2 == 0){
        printf("Numero par %d encontrado na posicao %d\n", vetor[i], i);
    }
}
return 0;
}
