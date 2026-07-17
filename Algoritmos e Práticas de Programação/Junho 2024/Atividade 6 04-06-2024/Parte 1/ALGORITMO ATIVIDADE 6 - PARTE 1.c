#include <stdio.h>
int main (){
    int soma = 0;
    for(int i = 1; i < 100; i += 2){
            soma += i;
}
    printf("Soma dos impares: %d\n", soma);
    return 0;
}
