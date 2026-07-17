#include <stdio.h>

double potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }

    if (expoente < 0) {
        return 1.0 / potencia(base, -expoente);
    }

    return base * potencia(base, expoente - 1);
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    double resultado = potencia(base, expoente);

    printf("%d elevado a %d e: %.6f\n", base, expoente, resultado);

    return 0;
}
