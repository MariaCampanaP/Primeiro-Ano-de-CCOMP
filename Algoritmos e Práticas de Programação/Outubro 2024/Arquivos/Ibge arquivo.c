#include <stdio.h>
#include <stdlib.h>

int main (void){

FILE *pont_arqu;
char palavra[20];
int idade;

printf("Escreva o seu nome:");
scanf("%s", palavra);

printf("Escreva a sua idade:");
scanf("%d", &idade);

pont_arqu = fopen("arquivo_palavra.txt", "w");

if(pont_arqu == NULL){
    printf("\nErro na abertura do arquivo\n");
    return 1;
}

fprintf(pont_arqu, "Escreva o seu nome:%s\n" "Escreva a sua idade:%d", palavra, idade);

fclose(pont_arqu);

printf("Dados gravados com sucesso!");

return 0;
}



