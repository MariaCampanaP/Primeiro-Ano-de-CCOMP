#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(const char *nomeArquivo, char caractere){

    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo %s.\n", nomeArquivo);
        return -1;
}

    int contador = 0;
    char c;

    while ((c = fgetc(arquivo)) != EOF){
        if(c == caractere){
            contador++;
        }
    }

    fclose(arquivo);
    return contador;

}

int main(){

    char nomeArquivo[100];
    char caractere;

    printf("Digite o nome do arquivo (com a extensao):");
    scanf("%s", nomeArquivo);

    printf("Digite o caractere a ser contado:");
    scanf(" %c", &caractere);

    int resultado = contarCaracteres(nomeArquivo, caractere);
    if (resultado != -1){
        printf("O caractere '%c' ocorre %d vezes no arquivo '%s'.\n", caractere, resultado, nomeArquivo);
    }

    return 0;

}
