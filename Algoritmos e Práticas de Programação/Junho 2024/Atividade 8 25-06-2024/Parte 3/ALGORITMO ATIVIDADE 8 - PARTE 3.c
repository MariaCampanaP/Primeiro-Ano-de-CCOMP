#include <stdio.h>
#include <ctype.h>
int main(){
    char frase[1000];
    int quantidadeVogais = 0;
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    for(int i = 0; frase[i] !=  '\0'; i++){
            char ch = tolower(frase[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                quantidadeVogais++;
            }
        }
        printf("Quantidade de vogais: %d\n", quantidadeVogais);

return 0;
}
