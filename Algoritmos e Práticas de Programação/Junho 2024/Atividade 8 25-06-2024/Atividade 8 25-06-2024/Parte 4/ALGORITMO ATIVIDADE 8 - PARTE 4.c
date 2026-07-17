#include <stdio.h>
#include <ctype.h>
int main(){
    char frase[1000];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    for(int i = 0; frase[i] !=  '\0'; i++){
            char ch = tolower(frase[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                frase[i] = '*';
            }
        }
        printf("Frase criptografada: %s\n", frase);

return 0;
}
