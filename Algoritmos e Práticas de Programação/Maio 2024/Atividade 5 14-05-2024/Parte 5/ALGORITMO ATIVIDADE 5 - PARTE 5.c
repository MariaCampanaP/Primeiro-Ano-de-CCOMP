#include <stdio.h>
int main(){
    float salario, novo_salario;
    float salario_limite = 500.00;
    float aumento = 0.30;
    printf("Digite o salario do funcionario: R$");
    scanf("%f", &salario);
    if (salario < salario_limite){
        novo_salario = salario + (salario * aumento);
        printf("O novo salario e: R$ %.2f\n", novo_salario);
    }else{
        printf("O funcionario nao tem direito ao aumento");
    }
    return 0;
}
