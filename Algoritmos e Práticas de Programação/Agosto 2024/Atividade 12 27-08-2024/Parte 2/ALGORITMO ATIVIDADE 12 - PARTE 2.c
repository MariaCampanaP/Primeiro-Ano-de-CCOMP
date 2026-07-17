#include <stdio.h>
float mediaTresNotas(float nota1, float nota2, float nota3){
    return (nota1 + nota2 + nota3)/3.0;
}

float mediaDuasMaiores(float nota1, float nota2, float nota3){
    float menor;

    if (nota1 <= nota2 && nota1 <= nota3){
        menor = nota1;
    }else if(nota2 <= nota1 && nota2 <= nota3){
        menor = nota2;
    }else{
        menor = nota3;
    }

return (nota1 + nota2 + nota3 - menor)/2.0;

}

void encontrarMaiorEMenor(float nota1, float nota2, float nota3, float *maior, float *menor) {
    *maior = nota1;
    *menor = nota1;

    if (nota2 > *maior){
        *maior = nota2;
    }
    if (nota3> *maior){
        *maior = nota3;
    }

    if(nota2 < *menor){
        *menor = nota2;
    }
    if (nota3 < *menor){
        *menor = nota3;
    }
}

int main() {
    float nota1, nota2, nota3;
    float media3, media2, maiorNota, menorNota;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media3 = mediaTresNotas(nota1, nota2, nota3);
    media2 = mediaDuasMaiores(nota1, nota2, nota3);
    encontrarMaiorEMenor(nota1, nota2, nota3, &maiorNota, &menorNota);

    printf("Media das tres notas: %.2f\n", media3);
    printf("Media das duas notas mais altas: %.2f\n", media2);
    printf("Nota mais alta: %.2f\n", maiorNota);
    printf("Nota mais baixa: %.2f\n", menorNota);

    return 0;
}
