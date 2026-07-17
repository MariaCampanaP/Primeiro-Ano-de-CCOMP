#include <stdio.h>
int main(){
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2.0;
    if (media >= 0.0 && media < 4.0){
        printf("Media: %.2f\nReprovado!\n", media);
    }else if (media >= 4.0 && media < 7.0){
        printf("Media: %.2f\nExame!\n", media);
        }else{
            printf("Media: %.2f\nAprovado!\n", media);
        }
        return 0;
    }
