#include <stdio.h>

void determinarCategoria(int idade, char* categoria){
     if (idade >= 5 && idade <= 7) {
        sprintf(categoria, "Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        sprintf(categoria, "Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        sprintf(categoria, "Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        sprintf(categoria, "Juvenil B");
    } else if (idade >= 18) {
        sprintf(categoria, "Adulto");
    } else {
        sprintf(categoria, "Idade fora da categoria");
    }
}

int main() {
    int idade;
    char categoria[20];

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    determinarCategoria(idade, categoria);

    printf("A categoria do nadador e: %s\n", categoria);

    return 0;
}
