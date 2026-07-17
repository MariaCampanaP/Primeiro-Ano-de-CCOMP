#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c, float *x1, float *x2){
    float delta;

    delta = b * b - 4 * a * c;
    if (delta >= 0){
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    }else{
        printf("A equacao nao possui raizes reais (delta < 0)\n");
    }
}

int main(){
    float a, b, c, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a != 0){
        calcularRaizes(a, b, c, &x1, &x2);
        printf("Raiz x1 = %.2f\n", x1);
        printf("Raiz x2 = %.2f\n", x2);
    } else {
        printf("O valor de 'a' deve ser diferente de zero para ser uma equação de segundo grau.\n");
    }

    return 0;
}
