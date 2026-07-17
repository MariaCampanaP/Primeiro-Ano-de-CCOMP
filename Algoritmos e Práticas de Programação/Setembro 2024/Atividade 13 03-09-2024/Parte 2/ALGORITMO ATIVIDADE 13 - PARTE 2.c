#include <stdio.h>

void incrementarEdecrementar(int *a, int *b){
    (*a)--;
    (*b)++;
}

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nAntes da incrementacao e decrementacao: num1 = %d, num2 = %d\n", num1, num2);

    incrementarEdecrementar(&num1, &num2);

    printf("Apos a troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
