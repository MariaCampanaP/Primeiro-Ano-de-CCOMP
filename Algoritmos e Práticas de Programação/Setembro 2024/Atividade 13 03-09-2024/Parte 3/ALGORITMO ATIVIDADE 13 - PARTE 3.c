#include <stdio.h>
#define PI 3.14

void calcularCirculo(float raio, float *perimetro, float *area){
    *perimetro = 2 * PI * raio;
    *area = PI * raio * raio;
}

int main(){
    float raio, perimetro, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    calcularCirculo(raio, &perimetro, &area);

    printf("\nPerimetro do circulo: %.2f\n", perimetro);
    printf("Area do circulo: %.2f\n", area);

    return 0;
}
