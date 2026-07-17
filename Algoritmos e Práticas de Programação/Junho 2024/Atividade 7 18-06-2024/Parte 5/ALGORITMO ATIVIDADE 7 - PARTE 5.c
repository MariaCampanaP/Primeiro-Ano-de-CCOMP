#include <stdio.h>
int main() {
    int RA[7];
    float medias[7];
    int i, indiceMaiorMedia = 0;
    float maiorMedia = 0.0;
    printf("Digite o RA e a media final dos 7 alunos:\n");
    for (i = 0; i < 7; i++) {
        printf("Aluno %d - RA: ", i + 1);
        scanf("%d", &RA[i]);
        printf("Aluno %d - Media final: ", i + 1);
        scanf("%f", &medias[i]);
        if (medias[i] > maiorMedia) {
            maiorMedia = medias[i];
            indiceMaiorMedia = i;
        }
    }
    printf("\nO RA do aluno com maior media e: %d\n", RA[indiceMaiorMedia]);
    printf("\nAlunos nao aprovados e nota necessaria para aprovacao no exame final:\n");
    for (i = 0; i < 7; i++) {
        if (medias[i] < 7.0) {
            float notaNecessaria = (5.0 * 2) - medias[i];
            printf("Aluno com RA %d precisa tirar %.2f na prova de exame final para ser aprovado.\n", RA[i], notaNecessaria);
        }
    }

    return 0;
}
