#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int numero1, int numero2){
    int valor_da_soma;
    valor_da_soma = numero1 + numero2;
    return valor_da_soma;
}

int subtracao(int numero1, int numero2){
    int valor_da_subtracao;
    valor_da_subtracao = numero1 - numero2;
    return valor_da_subtracao;
}

int multiplicacao(int numero1, int numero2){
    int valor_da_multiplicacao;
    valor_da_multiplicacao = numero1 * numero2;
    return valor_da_multiplicacao;
}

int divisao(int numero1, int numero2){
    int valor_da_divisao;
    valor_da_divisao = numero1 / numero2;
    return valor_da_divisao;
}

int main(){
    int numero1, numero2, valor_da_soma, valor_da_subtracao, valor_da_multiplicacao, valor_da_divisao;
    printf("Digite o numero 1 \n");
    scanf("%d", &numero1);
    printf("Digite o numero 2 \n");
    scanf("%d", &numero2);

    valor_da_soma = soma(numero1, numero2);
    printf("Resultado da Soma: %d\n", valor_da_soma);

    valor_da_subtracao = subtracao(numero1, numero2);
    printf("Resultado da Subtracao: %d\n", valor_da_subtracao);

    valor_da_multiplicacao = multiplicacao(numero1, numero2);
    printf("Resultado da Multiplicacao: %d\n", valor_da_multiplicacao);

    valor_da_divisao = divisao(numero1, numero2);
    printf("Resultado da Divisao: %d\n", valor_da_divisao);

return 0;
}
