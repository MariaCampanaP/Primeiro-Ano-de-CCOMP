#include <stdio.h>
#include <stdlib.h>

void substituirVogais(const char *entrada, const char *saida){

    FILE *arquivoEntrada = fopen(entrada, "r");
    if (arquivoEntrada == NULL){
        printf("Erro ao abrir o arquivo %s.\n", entrada);
        return;
    }

    FILE *arquivoSaida = fopen(saida, "w");
    if (arquivoSaida == NULL){
        printf("Erro ao criar o arquivo %s.\n", saida);
        fclose(arquivoEntrada);
        return;
    }

    char c;

    while ((c = fgetc(arquivoEntrada)) != EOF){
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            c = '*';
    }

    fputc(c, arquivoSaida);

    }

}

int main(){

    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];

    printf("Digite o nome do arquivo de entrada (com extensao):");
    scanf("%s", nomeArquivoEntrada);

    sprintf(nomeArquivoSaida, "saida_%s", nomeArquivoEntrada);

    substituirVogais(nomeArquivoEntrada, nomeArquivoSaida);

    printf("O arquivo de saida '%s' foi criado com as vogais substituidas por '*'.\n", nomeArquivoSaida);

    return 0;
}
