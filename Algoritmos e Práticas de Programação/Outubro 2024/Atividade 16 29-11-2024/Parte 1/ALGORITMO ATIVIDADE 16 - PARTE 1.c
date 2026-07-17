#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE* file1;
    FILE* file2;
    FILE* file3;
    char conteudo[500];

    file1 = fopen("arq1.txt", "r");
    if (file1 == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    file3 = fopen("arq3.txt", "w");
    if (file3 == NULL){
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    fgets(conteudo, 500, file1);
    fputs(conteudo, file3);

    fclose(file1);

    file2 = fopen("arq2.txt", "r");
    if (file2 == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
}

    fgets(conteudo, 500, file2);
    fputs(conteudo, file3);

    fclose(file2);
    fclose(file3);

    return 0;

}
