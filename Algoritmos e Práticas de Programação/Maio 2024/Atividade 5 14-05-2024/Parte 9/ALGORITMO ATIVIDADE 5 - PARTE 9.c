#include <stdio.h>
int main(){
    int codigo, quantidade;
    float preco_unitario, preco_total, desconto, preco_final;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade que foi comprada: ");
    scanf("%d", &quantidade);
    if (codigo >= 1 && codigo <= 10){
        preco_unitario = 10.0;
    }else if (codigo >= 11 && codigo <= 20){
        preco_unitario = 15.0;
    }else if (codigo >= 21 && codigo <= 30){
        preco_unitario = 20.0;
    }else if (codigo >= 31 && codigo <= 40){
        preco_unitario = 30.0;
    }else{
        printf("Codigo de produto invalido. \n");
        return 1;
    }
    preco_total = preco_unitario * quantidade;
    if (preco_total <= 2500){
        desconto = preco_total * 0.05;
    }else if (preco_total <= 500){
        desconto = preco_total * 0.10;
    }else{
        desconto = preco_total * 0.15;
    }
    preco_final = preco_total - desconto;
    printf("Preco unitario:R$ %.2f\n", preco_unitario);
    printf("Preco total da conta:R$ %.2f\n", preco_total);
    printf("Valor do desconto:R$ %.2f\n", desconto);
    printf("Preco final da conta:R$ %.2f\n", preco_final);
    return 0;
    }







