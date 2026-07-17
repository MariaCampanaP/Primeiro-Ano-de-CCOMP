#include <stdio.h>

void mostrarNumeros(int *num1, int *num2){
    int valorTemporario = *num1;
    *num1 = *num2;
    *num2 = valorTemporario;
}

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nAntes da troca: num1 = %d, num2 = %d\n", num1, num2);

    mostrarNumeros(&num1, &num2);

    printf("Apos a troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
