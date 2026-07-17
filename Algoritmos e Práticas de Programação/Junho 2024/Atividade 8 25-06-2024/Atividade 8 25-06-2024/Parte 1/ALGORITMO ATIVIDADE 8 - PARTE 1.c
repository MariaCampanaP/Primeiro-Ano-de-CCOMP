#include <stdio.h>
int main(){
    char nomes[5][50];
    for(int i = 0; i < 5; i++){
        printf("Digite o nome da pessoa %d:", i + 1);
        scanf("%49s", nomes[i]);
    }
    printf("\nOs nomes armazenados sao:\n");
    for(int i = 0; i < 5; i++){
        printf("%s\n", nomes[i]);
    }
return 0;
}
