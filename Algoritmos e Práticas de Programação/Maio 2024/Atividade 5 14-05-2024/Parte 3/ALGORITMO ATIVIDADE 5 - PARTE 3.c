#include <stdio.h>
int main() {
    float numero1, numero2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%f", &numero2);
    if (numero1 > numero2){
        printf("O maior numero e: %.2f\n", numero1);
    }else if (numero2 > numero1){
        printf("O maior numero e: %.2f\n", numero2);
    }
    return 0;
}
