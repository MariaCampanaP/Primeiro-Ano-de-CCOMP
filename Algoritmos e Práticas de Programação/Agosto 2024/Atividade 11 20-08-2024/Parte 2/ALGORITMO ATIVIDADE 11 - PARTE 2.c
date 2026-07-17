#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void calcular_Raizquadrada(double numero, double raizQuadrada){
    raizQuadrada = sqrt(numero);
    printf("A raiz quadrada de %.2f e %.2f\n", numero, raizQuadrada);
}

int main(){
    double numero;
    double raizQuadrada;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    calcular_Raizquadrada(numero, raizQuadrada);

return 0;

}
