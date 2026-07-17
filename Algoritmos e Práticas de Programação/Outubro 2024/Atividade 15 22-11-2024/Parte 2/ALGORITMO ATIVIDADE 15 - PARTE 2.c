#include <stdio.h>

int main(){

    FILE *file;
    char filename[100];
    char ch;
    int contadorVogais = 0;

    printf("Digite o nome do arquivo:");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL){
        perror("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while((ch = fgetc(file)) != EOF){
       if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        contadorVogais++;
       }
    }

    fclose(file);

    printf("O arquivo contem %d vogais.\n", contadorVogais);

    return 0;
}

