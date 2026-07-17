#include <stdio.h>
int main(){
    float salario_base, salario_recebido;
    float bonus = 50;
    float imposto = 0.10;
    printf("Digite o salario base do funcionario:");
    scanf("%f", &salario_base);
    float valor_descontado = salario_base*imposto;
    salario_recebido = salario_base + bonus - valor_descontado;
    printf("O salario a receber e: R$%.2f\n", salario_base);
    return 0;
}
