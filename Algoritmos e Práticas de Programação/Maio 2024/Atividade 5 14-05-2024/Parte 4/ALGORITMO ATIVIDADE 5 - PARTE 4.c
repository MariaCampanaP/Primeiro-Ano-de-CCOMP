#include <stdio.h>
int main(){
    float num1, num2, resultado;
    int codigo;
    printf("Digite o primeiro numero:");
    scanf("%f", &num1);
    printf("Digite o segundo numero:");
    scanf("%f", &num2);
    printf("Digite o codigo:");
    scanf("%d", &codigo);
    switch (codigo){
    case 1:
        resultado = (num1 + num2)/2;
        printf("A media entre os numeros e: %.2f\n", resultado);
        break;
    case 2:
        if (num1 > num2){
                resultado = num1 - num2;
        }else{
                resultado = num2 - num1;
        }
        printf("A diferenca do maior pelo menor e: %.2f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("O produto entre os dois numeros e: %.2f\n", resultado);
        break;
    case 4:
        if (num2!= 0){
            resultado = num1 / num2;
            printf("A divisao do primeiro pelo segundo e: %.2f\n", resultado);
        }else{
            printf("Erro: divisao por zero nao e permitida.\n");
        }
        break;
    default:
        printf("Codigo invalido, digitar 1, 2, 3 ou 4.\n");
        break;
    }
    return 0;
}





















