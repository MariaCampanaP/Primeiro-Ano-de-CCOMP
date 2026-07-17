#include <stdio.h>

void preencherVetor (int v[]){
    for (int i = 0; i < 10; i++){
    v[i] = rand();
    }
}

void checarVet (int num, int v[], int *fessor){
    for (int i = 0; i < 10; i++){
        if(num == v[i]){
            *fessor = 1;
        }
    }
}

int main(){
    int num, v[10], fessor;

    preencherVetor(v);

    printf("Coloque um numero:");
    scanf("%d", &num);

    checarVet(num, v, &fessor);

    if(fessor == 1){
        printf("O numero esta presente no vetor!");
    }else{
        printf("O numero nao esta presente no vetor!");
    }
return 0;
}


