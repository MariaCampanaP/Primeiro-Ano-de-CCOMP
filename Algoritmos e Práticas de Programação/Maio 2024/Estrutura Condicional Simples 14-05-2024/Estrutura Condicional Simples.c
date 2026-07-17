#include <stdio.h>
int main() {
    int codigo;
    printf("Digite o codigo (1, 2 ou 3): ");
    scanf("%d", &codigo);
    switch (codigo){
    case 1:
        printf("Codigo do gerente");
        break;
    case 2:
        printf("Codigo do supervisor");
        break;
    case 3:
        printf("Codigo do encarregado");
        break;
    default:
        printf("Codigo nao identificado");

    }
    return 0;

}


