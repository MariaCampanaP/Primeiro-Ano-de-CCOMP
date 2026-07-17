#include <stdio.h>
#include <limits.h>
#include <float.h>

struct Pessoa {
    float salario;
    int idade;
    char sexo;
    int num_filhos;
};

int main() {
    struct Pessoa pessoa;
    float soma_salario = 0, soma_salario_mulheres = 0;
    int soma_idade_mulheres = 0, soma_filhos = 0;
    int cont_pessoas = 0, cont_mulheres = 0;
    float maior_salario = 0;
    int menor_idade = INT_MAX;

    while (1) {
        printf("Digite a idade (ou 0 para sair): ");
        scanf("%d", &pessoa.idade);
        if (pessoa.idade == 0) break;

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &pessoa.sexo);

        printf("Digite o salario: ");
        scanf("%f", &pessoa.salario);

        printf("Digite o numero de filhos: ");
        scanf("%d", &pessoa.num_filhos);

        soma_salario += pessoa.salario;
        soma_filhos += pessoa.num_filhos;
        cont_pessoas++;

        if (pessoa.sexo == 'F' && pessoa.salario < 300.0) {
            soma_idade_mulheres += pessoa.idade;
            soma_salario_mulheres += pessoa.salario;
            cont_mulheres++;
        }
        if (pessoa.salario > maior_salario) {
            maior_salario = pessoa.salario;
        }
        if (pessoa.idade < menor_idade) {
            menor_idade = pessoa.idade;
        }
    }
    if (cont_pessoas > 0) {
        printf("\nMedia de salario da populacao: %.2f\n", soma_salario / cont_pessoas);
        printf("Media de numero de filhos: %.2f\n", (float)soma_filhos / cont_pessoas);
        printf("Maior salario: %.2f\n", maior_salario);
        printf("Menor idade: %d\n", menor_idade);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    if (cont_mulheres > 0) {
        printf("Media de idade das mulheres com salario inferior a R$ 300,00: %.2f\n",
               (float)soma_idade_mulheres / cont_mulheres);
    } else {
        printf("Nenhuma mulher com salario inferior a R$ 300,00 foi registrada.\n");
    }

    return 0;
}
