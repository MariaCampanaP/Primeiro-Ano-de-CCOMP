#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int numero;
    char nome[100];
    char curso[100];
    float nota1;
    float nota2;

} Aluno;

void salvarAluno(Aluno aluno){

    char nomeArquivo[150];
    sprintf(nomeArquivo, "%s.txt", aluno.nome);

    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    fprintf(arquivo,"Numero: %d\n", aluno.numero);
    fprintf(arquivo,"Nome: %s\n", aluno.nome);
    fprintf(arquivo,"Curso: %s\n", aluno.curso);
    fprintf(arquivo,"Nota 1: %.2f\n", aluno.nota1);
    fprintf(arquivo,"Nota 2: %.2f\n", aluno.nota2);

    fclose(arquivo);

    printf("Dados do aluno %s salvo com sucesso em %s\n\n", aluno.nome, nomeArquivo);

}

int main(){

    Aluno aluno;
    int i;

    for (i = 0; i < 3; i++){
        printf("Digite os dados do aluno %d\n", i + 1);

        printf("Numero:");
        scanf("%d", &aluno.numero);

        printf("Nome:");
        scanf(" %[^\n]", aluno.nome);

        printf("Curso:");
        scanf(" %[^\n]", aluno.curso);

        printf("Nota 1:");
        scanf("%f", &aluno.nota1);

        printf("Nota 2:");
        scanf("%f", &aluno.nota2);

        salvarAluno(aluno);

    }

    return 0;
}

