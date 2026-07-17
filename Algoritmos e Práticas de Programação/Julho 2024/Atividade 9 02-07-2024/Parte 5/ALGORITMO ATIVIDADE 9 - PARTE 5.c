#include <stdio.h>
#define VENDEDORES 3
#define SEMANAS 4
int main(){
    float vendas[VENDEDORES][SEMANAS];
    float total_vendas_vendedor[VENDEDORES] = {0};
    float total_vendas_semana[SEMANAS] = {0};
    float total_vendas_mes = 0;
    printf("Digite as vendas semanais de cada vendedor:\n");
    for (int i = 0; i < VENDEDORES; i++){
        for (int j = 0; j < SEMANAS; j++){
            printf("Vendas do vendedor %d na semana %d: ", i + 1, j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }
    for (int i = 0; i < VENDEDORES; i++){
        for (int j = 0; j < SEMANAS; j++){
            total_vendas_vendedor[i] += vendas[i][j];
        }
        total_vendas_mes += total_vendas_vendedor[i];
    }
    for (int j = 0; j < SEMANAS; j++){
        for (int i = 0; i < VENDEDORES; i++){
            total_vendas_semana[j] += vendas[i][j];
        }
    }
    printf("\nTotal de vendas do mes de cada vendedor:\n");
    for (int i = 0; i < VENDEDORES; i++){
        printf("Vendedor %d: %.2f\n", i + 1, total_vendas_vendedor[i]);
    }
    printf("\nTotal de vendas de cada semana (todos os vendedores juntos):\n");
    for (int j = 0; j < SEMANAS; j++){
        printf("Semana %d: %.2f\n", j + 1, total_vendas_semana[j]);
    }
    printf("\nTotal de vendas do mes (todos os vendedores): %.2f\n", total_vendas_mes);
    return 0;
}
