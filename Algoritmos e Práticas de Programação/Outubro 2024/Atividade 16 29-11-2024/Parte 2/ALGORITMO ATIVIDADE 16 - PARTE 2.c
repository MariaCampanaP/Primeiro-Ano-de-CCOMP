#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int populacao = 0, populacaom = 0;
    char cidade[40], entrada[20], saida[20], cidadem[40];

    printf("Digite o nome do arquivo de entrada:\n");
    gets(entrada);
    printf("Digite o nome do arquivo de saida:\n");
    gets(saida);

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

    while(fscanf(entr, "%s %d", cidade, &populacao) != EOF){
        if(populacao > populacaom){
            populacaom = populacao;
            strcpy(cidadem, cidade);
        }}

    fprintf(said, "%s %d\n", cidadem, populacaom);

    fclose(entr);
    fclose(said);

    return 0;

}
