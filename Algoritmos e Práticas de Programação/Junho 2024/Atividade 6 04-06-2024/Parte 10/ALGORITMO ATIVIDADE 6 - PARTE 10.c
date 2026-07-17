#include <stdio.h>
int main(){
    int i;
    float nota1, nota2, nota3, media = 0, peso, pesogeral = 0, notapond = 0;
    do{
        printf("1 - Media Aritmetica\n2 - Media ponderada\n3 - Sair\n");
        scanf("%d", &i);
        if (i == 1){
            printf("\nSelecionado: Media Aritmetica\n\nDigite as duas notas: ");
            scanf("%f %f", &nota1, &nota2);
            media = nota1 + nota2;
            media = media/2;
            printf("Resultado: %.2f\n\n", media);
            media = 0;
        }else if(i == 2){
            for(int a = 1; a <= 3; a++){
            printf("\nSelecionado: Media Ponderada\n\nDigite uma nota: ");
            scanf("%f", &nota3);
            printf("Digite o peso da nota: ");
            scanf("%f", &peso);
            notapond = notapond + (nota3 * peso);
            pesogeral = pesogeral + peso;
                }
            media = notapond/pesogeral;
            printf("Resultado: %.2f\n\n", media);
            media = 0;
        }else if (i > 3){
            printf("\nOpcao invalida\n\n");
            }
    }while (i < 3 || i > 3);
    printf("\nSaindo\n");
    return 0;
    }










