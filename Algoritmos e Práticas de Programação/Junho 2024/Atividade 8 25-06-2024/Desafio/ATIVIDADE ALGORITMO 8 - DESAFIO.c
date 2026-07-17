#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char nome[1000], resultado[1000];
    int inicioPalavra = 0, fimPalavra = 0, resultadoIndex = 0;
    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome),stdin);
    nome[strcspn(nome, "\n")] = 0;
    int tamanho = strlen(nome);
    while(nome[fimPalavra] != ' ' && nome[fimPalavra] != '\0'){
        fimPalavra++;
    }
    strncpy(resultado, nome, fimPalavra);
    resultadoIndex = fimPalavra;
    resultado[resultadoIndex++] = ' ';
    inicioPalavra = fimPalavra + 1;
    while(inicioPalavra < tamanho){
        fimPalavra = inicioPalavra;
        while (nome[fimPalavra] != ' ' && nome[fimPalavra] != '\0'){
            fimPalavra++;
        }
        if (nome[fimPalavra] == ' '){
                resultado[resultadoIndex++] = toupper(nome[inicioPalavra]);
                resultado[resultadoIndex++] = '.';
                resultado[resultadoIndex++] = ' ';
        }else{
            strncpy(&resultado[resultadoIndex], &nome[inicioPalavra], fimPalavra - inicioPalavra);
            resultadoIndex += fimPalavra - inicioPalavra;
            break;
        }
        inicioPalavra = fimPalavra + 1;
    }
    resultado[resultadoIndex] = '\0';
    printf("Nome abreviado: %s\n", resultado);
    return 0;
}
