#include <stdio.h>
int main(){
    float sal_atual, aumento, novo_sal;
    printf("Digite o salario atual:");
    scanf("%f", &sal_atual);
    if (sal_atual <= 499.99){
        aumento = sal_atual * 0.15;
    }else if (sal_atual >= 500.00 && sal_atual <= 1499.99){
        aumento = sal_atual * 0.10;
    }else if (sal_atual >= 1500.00 && sal_atual <= 2499.99){
        aumento = sal_atual * 0.05;
    }else{
        aumento = 0.0;
    }
    novo_sal = sal_atual + aumento;
    printf("Mostrar o valor do aumento:R$ %.2f\n", aumento);
    printf("Mostar o novo salario:R$ %.2f\n", novo_sal);
return 0;
}

