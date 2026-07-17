#include <stdio.h>
int main(){
    int produto;
    for (int i = 0; i <= 100; i += 2){
        printf("i sendo par: %d\n", i);
        produto = i * 1;
        printf("Soma dos numeros pares: %d\n", produto);
    }
    for (int i = 1; i <= 100; i += 2){
        printf("i sendo impar: %d\n", i);
        produto = i * i;
        printf("Soma dos numeros impares: %d\n", produto);
    }
    return 0;
}
