#include <stdio.h>
int main (){
    float temperatura_c, temperatura_f;
    printf("Digite a temperatura local em Graus Celsius:");
    scanf("%f", &temperatura_c);
    temperatura_f = (1.8*temperatura_c)+32;
    printf("A temperatura em Fahrenheit e: %.2f\n", temperatura_f);
    return 0;
}
