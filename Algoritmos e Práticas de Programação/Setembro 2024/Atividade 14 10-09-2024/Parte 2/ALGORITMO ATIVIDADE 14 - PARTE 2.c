#include <stdio.h>

struct funcionario {
    char nome[30], sexo, data_nasc[30], cargo_ocupa[30], cpf[15];
    int idade, cod_setor;
    float sal;
};

typedef struct funcionario Funcionario;

void Ibge(Funcionario *cadastro) {
    printf("Digite o seu nome: ");
    fgets(cadastro->nome, sizeof(cadastro->nome), stdin);
    cadastro->nome[strcspn(cadastro->nome, "\n")] = 0;

    printf("Digite o seu sexo (M/F): ");
    scanf(" %c", &cadastro->sexo);
    getchar();

    printf("Digite o seu nascimento DD/MM/AAAA: ");
    fgets(cadastro->data_nasc, sizeof(cadastro->data_nasc), stdin);
    cadastro->data_nasc[strcspn(cadastro->data_nasc, "\n")] = 0;

    printf("Digite o seu cargo: ");
    fgets(cadastro->cargo_ocupa, sizeof(cadastro->cargo_ocupa), stdin);
    cadastro->cargo_ocupa[strcspn(cadastro->cargo_ocupa, "\n")] = 0;

    printf("Digite a sua idade: ");
    scanf("%d", &cadastro->idade);

    printf("Digite o seu CPF: ");
    getchar();
    fgets(cadastro->cpf, sizeof(cadastro->cpf), stdin);
    cadastro->cpf[strcspn(cadastro->cpf, "\n")] = 0;
    printf("Digite o codigo do setor (0-99): ");
    scanf("%d", &cadastro->cod_setor);

    printf("Digite o seu salario: ");
    scanf("%f", &cadastro->sal);
}

int main() {
    Funcionario cadastro;

    Ibge(&cadastro);

    printf("\n--- Informacoes do Funcionario ---\n");
    printf("Nome: %s\n", cadastro.nome);
    printf("Sexo: %c\n", cadastro.sexo);
    printf("Data de Nascimento: %s\n", cadastro.data_nasc);
    printf("Cargo: %s\n", cadastro.cargo_ocupa);
    printf("Idade: %d\n", cadastro.idade);
    printf("CPF: %s\n", cadastro.cpf);
    printf("Codigo do Setor: %d\n", cadastro.cod_setor);
    printf("Salario: %.2f\n", cadastro.sal);

    return 0;
}
