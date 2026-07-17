#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int anoC = 0, anoNasc = 0, idade = 0;
    char nome[40], entrada[20], saida[20];

    printf("Digite o nome do arquivo de entrada:\n");
    gets(entrada);
    printf("Digite o nome do arquivo de saida:\n");
    gets(saida);
    fflush(stdin);
    printf("Digite o ano atual:");
    scanf("%d", &anoC);

    FILE* entr;
    FILE* said;

    entr = fopen(entrada, "r");
    if (entr == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    said = fopen(saida, "w");
    if (said == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while(fscanf(entr, "%s %d", nome, &anoNasc) != EOF){
            idade = anoC - anoNasc;
        if(idade < 18){
            fprintf(said, "%s\n%d anos: Menor de idade\n", nome, idade);
        } else if(idade > 18){
            fprintf(said, "%s\n%d anos: Maior de idade\n", nome, idade);
        }else if(idade == 18){
            fprintf(said, "%s\n%d anos: Entrando na maior idade\n", nome, idade);
        }
    }

    fclose(entr);
    fclose(said);

    return 0;

}
