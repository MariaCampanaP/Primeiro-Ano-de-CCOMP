#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcular_Numero(int n1, int n2){
    if(n1 > n2){
        printf("Maior: %d", n1);
    }else{
        printf("Maior: %d", n2);
    }

}

int main(){
    int n1;
    int n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    calcular_Numero(n1, n2);

return 0;
}
