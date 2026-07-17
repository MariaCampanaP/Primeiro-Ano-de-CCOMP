#include <stdio.h>
int main(){
    int ano_nasc, ano_atual, idade, idade_2050;
    printf("Digite o seu ano de nascenca:");
    scanf("%d", &ano_nasc);
    printf("Digite o ano atual:");
    scanf("%d", &ano_atual);
    idade = ano_atual - ano_nasc;
    printf("A sua idade e: %d\n", idade);
    idade_2050 = 2050 - ano_nasc;
    printf("A sua idade em 2050 sera de: %d anos.\n", idade_2050);
    return 0;
}
