#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int dado[20];
    int freq[6] = {0};
    srand(time(NULL));
    for (int i = 0; i <= 20; i++){
        dado[i] = rand() % 6;
        if(dado [i] == 1){
            freq[0]++;
        }
        else if(dado[i] == 2){
            freq[1]++;
        }
        else if(dado[i] == 3){
            freq[2]++;
        }
        else if(dado[i] == 4){
            freq[3]++;
        }
        else if(dado[i] == 5){
            freq[4]++;
        }
        else if(dado[i] == 6){
            freq[5]++;
        }
        printf("Numeros sorteados\n");
        }
        for(int i = 0; i < 20; i++){
            printf("%d", dado[i]);
        }
        printf("\n");
        printf("Frequencia dos numeros:\n");
        for(int i = 0; i < 6; i++){
            printf("Numero %d: %d vezes\n", i + 1, freq[i]);
        }
        return 0;
}

