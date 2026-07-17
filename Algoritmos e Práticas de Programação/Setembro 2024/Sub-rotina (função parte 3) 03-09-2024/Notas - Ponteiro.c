#include <stdio.h>

void calcularMedia(float *nota1, float *nota2, float *media){
    *media = (*nota1 + *nota2) / 2.0;
}

int main(){
    float nota1, nota2, media;

    printf("Digite duas notas\n");
    scanf("%f %f", &nota1, &nota2);
    calcularMedia(&nota1, &nota2, &media);
    printf("%f", media);

    return 0;
}
