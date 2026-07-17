#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char palavra[1000];
    int ehPalindromo = 1;
    printf("Digite uma palavra:");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    for(int i = 0; i < tamanho / 2; i++){
        if(tolower(palavra[i]) != tolower(palavra[tamanho - 1 - i])){
            ehPalindromo = 0;
            break;
        }
    }
    if (ehPalindromo){
        printf("A palavra '%s', e um palindromo.\n", palavra);
    }else{
        printf("A palavra '%s', nao e um palindromo.\n", palavra);
    }
return 0;
}
