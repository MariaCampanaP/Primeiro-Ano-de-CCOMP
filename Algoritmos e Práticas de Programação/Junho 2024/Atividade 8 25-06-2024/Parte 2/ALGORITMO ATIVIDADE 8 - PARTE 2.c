#include <stdio.h>
#include <string.h>
int main(){
    char musica[100];
    char caractere;
    char encontrado = 0;
    printf("Digite o nome da musica:");
    fgets(musica, 100, stdin);
    musica[strcspn(musica, "\n")] = '\0';
    printf("Digite o caractere: ");
    scanf("%c", &caractere);
    for(int i = 0; i < strlen(musica); i++){
        if(musica[i] == caractere){
            printf("Ocorrencia de caractere na posicao %d\n", i);
            encontrado = 1;
        }
    }
    if(!encontrado){
        printf("Caractere nao encontrado.\n");
    }
return 0;
}
