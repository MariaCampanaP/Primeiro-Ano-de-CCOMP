#include <stdio.h>
#include <string.h>
struct Carro {
    char marca[16];
    int ano;
    float preco;
};

int main() {
    struct Carro carros[5];
    int i;
    float p;

    for (i = 0; i < 5; i++) {
        printf("Digite a marca do carro %d: ", i + 1);
        scanf("%s", carros[i].marca);

        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);

        printf("Digite o preco do carro %d: ", i + 1);
        scanf("%f", &carros[i].preco);
    }

    while (1) {
        printf("Digite um valor p (0 para sair): ");
        scanf("%f", &p);

        if (p == 0) break;

        printf("\nCarros com preco menor que %.2f:\n", p);
        int encontrou = 0;

        for (i = 0; i < 5; i++) {
            if (carros[i].preco < p) {
                printf("Marca: %s, Ano: %d, Preco: %.2f\n",
                       carros[i].marca, carros[i].ano, carros[i].preco);
                encontrou = 1;
            }
        }

        if (!encontrou) {
            printf("Nenhum carro encontrado com preco menor que %.2f\n", p);
        }
    }

    return 0;
}
