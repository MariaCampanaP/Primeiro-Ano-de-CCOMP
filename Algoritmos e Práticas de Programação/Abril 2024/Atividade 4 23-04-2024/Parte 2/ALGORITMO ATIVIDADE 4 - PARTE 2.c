#include <stdio.h>
int main(){
    int N1, N2, N3, N4;
    int soma;
    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &N1);
    printf("Digite o segundo numero inteiro:");
    scanf("%d", &N2);
    printf("Digite o terceiro numero inteiro:");
    scanf("%d", &N3);
    printf("Digite o quarto numero inteiro:");
    scanf("%d", &N4);
    soma = N1 + N2 + N3 + N4;
    printf("Mostre a soma dos quatro numeros inteiros: %d\n", soma);
    return 0;
}
