#include <stdio.h>

int main(){

    FILE *file;
    char ch;

    file = fopen("arq.txt", "w");
    if (file == NULL){
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    printf("Digite os caracteres (Digite o '0' para finalizar):\n");

    while(1){
        ch = getchar();

        if (ch == '0'){
            break;
        }

        fputc(ch, file);
    }

    fclose(file);

    file = fopen("arq.txt", "r");
    if (file == NULL){
        printf("Erro ao abir o arquivo para leitura.\n");
        return 1;
    }

    printf("\nConteudo do arquivo:\n");

    while((ch = fgetc(file)) != EOF){
        putchar(ch);
    }

    fclose(file);

    return 0;
}
