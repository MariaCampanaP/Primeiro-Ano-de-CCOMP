#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void calcularEMostrarDistancia(float x1, float y1, float x2, float y2) {
    float distancia;
    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) e %.2f\n", x1, y1, x2, y2, distancia);
}

int main() {
    float x1, y1, x2, y2;

    printf("Digite as coordenadas do ponto 1 (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do ponto 2 (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    calcularEMostrarDistancia(x1, y1, x2, y2);

    return 0;
}
