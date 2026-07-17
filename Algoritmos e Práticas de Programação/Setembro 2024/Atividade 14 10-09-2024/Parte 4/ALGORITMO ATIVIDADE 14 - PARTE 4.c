#include <stdio.h>
#include <string.h>

struct Produto {
    int codigo;
    char descricao[50];
    float preco_compra;
    float preco_venda;
    int quantidade_estoque;
    int estoque_minimo;
};

void cadastrarProdutos(struct Produto estoque[], int total_produtos) {
    for (int i = 0; i < total_produtos; i++) {
        printf("\n--- Cadastro de Produto %d ---\n", i + 1);

        printf("Digite o codigo do produto: ");
        scanf("%d", &estoque[i].codigo);
        getchar();

        printf("Digite a descricao do produto: ");
        fgets(estoque[i].descricao, sizeof(estoque[i].descricao), stdin);
        estoque[i].descricao[strcspn(estoque[i].descricao, "\n")] = 0;

        printf("Digite o preco de compra: ");
        scanf("%f", &estoque[i].preco_compra);

        printf("Digite o preco de venda: ");
        scanf("%f", &estoque[i].preco_venda);

        printf("Digite a quantidade em estoque: ");
        scanf("%d", &estoque[i].quantidade_estoque);

        printf("Digite o estoque minimo permitido: ");
        scanf("%d", &estoque[i].estoque_minimo);
    }
}

void calcularLucro(struct Produto estoque[], int total_produtos) {
    int codigo;
    printf("\nDigite o codigo do produto para calcular o lucro: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (estoque[i].codigo == codigo) {
            float lucro = estoque[i].preco_venda - estoque[i].preco_compra;
            float percentual_lucro = (lucro / estoque[i].preco_compra) * 100;

            printf("\nProduto: %s\n", estoque[i].descricao);
            printf("Lucro obtido: %.2f\n", lucro);
            printf("Percentual de lucro: %.2f%%\n", percentual_lucro);
            return;
        }
    }

    printf("\nProduto com codigo %d nao encontrado.\n", codigo);
}

void mostrarEstoqueBaixo(struct Produto estoque[], int total_produtos) {
    printf("\nProdutos com estoque abaixo do minimo permitido:\n");
    for (int i = 0; i < total_produtos; i++) {
        if (estoque[i].quantidade_estoque < estoque[i].estoque_minimo) {
            printf("\nProduto: %s\n", estoque[i].descricao);
            printf("Codigo: %d\n", estoque[i].codigo);
            printf("Quantidade em estoque: %d\n", estoque[i].quantidade_estoque);
            printf("Estoque minimo: %d\n", estoque[i].estoque_minimo);
        }
    }
}

int main() {
    int total_produtos = 40;
    struct Produto estoque[40];

    int opcao;
    do {
        printf("\n--- Menu ---\n");
        printf("1. Cadastrar produtos\n");
        printf("2. Calcular lucro de um produto\n");
        printf("3. Mostrar produtos com estoque abaixo do minimo\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProdutos(estoque, total_produtos);
                break;
            case 2:
                calcularLucro(estoque, total_produtos);
                break;
            case 3:
                mostrarEstoqueBaixo(estoque, total_produtos);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
