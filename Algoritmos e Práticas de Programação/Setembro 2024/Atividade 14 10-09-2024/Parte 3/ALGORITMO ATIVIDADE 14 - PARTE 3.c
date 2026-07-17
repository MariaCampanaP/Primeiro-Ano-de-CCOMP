#include <stdio.h>

struct Vendedor{
    float salario_fixo;
    float vendas_totais;
    float comissao;
    float salario_final;
};

void calcularSalario(struct Vendedor *v){
    printf("Digite o salario fixo: ");
    scanf("%f", &v->salario_fixo);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &v->vendas_totais);
    v->comissao = v->vendas_totais * 0.06;
    v->salario_final = v->salario_fixo + v->comissao;
}

int main(){

    struct Vendedor vendedores[2];
      for (int i = 0; i < 2; i++) {
        printf("\nVendedor %d\n", i + 1);
        calcularSalario(&vendedores[i]);
    }

     for (int i = 0; i < 2; i++) {
        printf("\n--- Informações do Vendedor %d ---\n", i + 1);
        printf("Salario Fixo: %.2f\n", vendedores[i].salario_fixo);
        printf("Vendas Totais: %.2f\n", vendedores[i].vendas_totais);
        printf("Comissao: %.2f\n", vendedores[i].comissao);
        printf("Salario Final: %.2f\n", vendedores[i].salario_final);
     }

     return 0;
}
