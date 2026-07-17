#include <stdio.h>
int main(){
    int codigo;
    float valorInvestido, valorNovo;
    printf("Digite o codigo de investimento (1 para poupanca, 2 para fundo de renda fixa):");
    scanf("%d", &codigo);
    printf("Digite o valor investido:");
    scanf("%f", &valorInvestido);
    if (codigo == 1){
        valorNovo = valorInvestido * (1 + 0.005);
    }else if (codigo == 2){
        valorNovo = valorInvestido * (1 + 0.011);
    }else {
         printf("Codigo de investimento invalido\n");
         return 1;
    }
    printf("O novo valor apos um mes e: %.2f\n", valorNovo);
    return 0;
}








