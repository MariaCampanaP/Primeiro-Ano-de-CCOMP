#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcular_Idade(int idade){
    int idade2050 = idade + 2050 - 2024;
    printf("Idade em 2050: %d\n", idade2050);
}

void calcular_Salario(float salario, float aumento){
    salario = salario * (aumento/100) + salario;
    printf("Novo salario: %.2f", salario);
}

int main(){
    int idade;
    float salario;
    float aumento;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite o aumento: ");
    scanf("%f", &aumento);

    calcular_Idade(idade);
    calcular_Salario(salario, aumento);

return 0;

}
