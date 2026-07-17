#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int codigo = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    float valor, vt1 = 0, vt2 = 0, vt3 = 0, vt4 = 0, m1 = 0, m2 = 0, m3 = 0, m4 = 0;
    char entrada[20], virgula;

    printf("Digite o nome do arquivo de entrada:\n");
    gets(entrada);
    fflush(stdin);

    FILE* entr;

    entr = fopen(entrada, "r");
    if (entr == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while(fscanf(entr, "%d %c %f", &codigo, &virgula, &valor) != EOF){
        if(codigo == 1){
            c1++;
            vt1 = vt1 + valor;
            m1 = vt1/c1;
        } else if(codigo == 2){
            c2++;
            vt2 = vt2 + valor;
            m2 = vt2/c2;
        } else if(codigo == 3){
            c3++;
            vt3 = vt3 + valor;
            m3 = vt3/c3;
        } else if(codigo == 4){
            c4++;
            vt4 = vt4 + valor;
            m4 = vt4/c4;
        }}

    fclose(entr);

        printf("Filial 1\nValor Total: R$%.2f\nMedia: R$%.2f\n", vt1, m1);
        printf("Filial 2\nValor Total: R$%.2f\nMedia: R$%.2f\n", vt2, m2);
        printf("Filial 3\nValor Total: R$%.2f\nMedia: R$%.2f\n", vt3, m3);
        printf("Filial 4\nValor Total: R$%.2f\nMedia: R$%.2f\n", vt4, m4);

    return 0;

}
