#include <stdio.h>
int main(){
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    if (idade < 5){
        printf("Sem categoria ainda. \n");
    }else if (idade >= 5 && idade <= 7){
        printf("Categoria:Infantil. \n");
    }else if (idade >= 8 && idade <= 10){
        printf("Categoria:Juvenil. \n");
    }else if (idade >= 11 && idade <= 15){
        printf("Categoria:Adolescente. \n");
    }else if (idade >= 16 && idade <= 30){
        printf("Categoria:Adulto. \n");
    }else {
        printf("Categoria:Senior. \n");
    }
    return 0;
}
