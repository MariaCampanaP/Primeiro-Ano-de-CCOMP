#include <stdio.h>
#include <string.h>
struct Produto{
    int codigo;
    char nome[16];
    float preco;
    int quantidade;
};

int main(){
    struct Produto produtos[5];
    int i, codigo, quantidade_pedida;

    for (i = 0; i < 5; i++){
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &produtos[i].codigo);

        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", &produtos[i].nome);

        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);

        printf("Digite a quantidade em estoque do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);
    }

    while(1){
        printf("\nDigite o codigo do produto (0 para sair): ");
        scanf("%d", &codigo);

        if (codigo == 0)break;

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade_pedida);

        int encontrado = 0;

        for (i = 0; i < 5; i++){
            if (produtos[i].codigo == codigo){
                encontrado = 1;

                if (produtos[i].quantidade >= quantidade_pedida){
                    produtos[i].quantidade -= quantidade_pedida;
                    printf("Pedido atendido. Estoque atualizado.\n");
                    printf("Quantidade restante do produto '%s': %d\n", produtos[i].nome, produtos[i].quantidade);
                }else{
                    printf("Erro: Quantidade insuficiente em estoque.\n");
                }
                break;
            }
        }
        if (!encontrado){
            printf("Erro: Codigo do produto nao encontrado.\n");
        }
    }
    return 0;
}
