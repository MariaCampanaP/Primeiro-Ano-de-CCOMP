#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int codigo = 0;
    float valor;
    char saida[20];

    printf("Digite o nome do arquivo de saida:\n");
    gets(saida);
    fflush(stdin);

    FILE* said;

    said = fopen(saida, "w");
    if (said == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
        do{
        printf("Digite o codigo da filial:");
        scanf("%d", &codigo);

        if(codigo != 0){
        printf("Digite o valor da filial:");
        scanf("%f", &valor);
        fprintf(said, "%d,%.2f\n", codigo, valor);
        } else {
            break;

        }}while(codigo != 0);

    fclose(said);

    return 0;

}
