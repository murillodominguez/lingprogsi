#include <stdio.h>
#include <stdlib.h>

typedef struct Produto {
    char nome[30];
    int codigo;
    double preco;
} Produto;

typedef struct Node {
    Produto prod;
    struct Node *proximo;
} Node;

void adicionarProduto(Produto *p);

int checarExistencia(Produto *p);

void exibirProdutos(Produto *p);

void buscaProduto(Produto *p);

int main() {
    printf("Bem-vindo ao Gestor de Produtos!\n\n");

    int loop = 1;
    Produto *Produtos = NULL;
    
    if (!Produtos) {
        printf("ERRO: Memoria Insuficiente");
        exit(1);
    }

    while (loop) {
        printf("Digite uma das opções do menu para prosseguir:\n\n");
        
        int escolha;
        
        printf("MENU\n\n1 - Adicionar Produto\n");
        printf("2 - Exibir Lista de Produtos\n");
        printf("3 - Buscar Produto\n");
        printf("4 - Encerrar\n\n");

        scanf("%d", &escolha);

        switch(escolha){
            case 1:
                adicionarProduto(Produtos);
                break;
            case 2:
                exibirProdutos(Produtos);
                break;
            case 3:
                buscaProduto(Produtos);
                break;
            case 4:
                loop = 0;
                break;
            default:
                printf("\nPor favor, digite uma opção válida!\n\n");
                continue;
        }
    }

    return 0;
}

void adicionarProduto(Node **p) {
    char nome[30];
    int codigo;
    double preco;
    Node *novoProduto = (Node*)malloc(sizeof(Node));

    if (!novoProduto) {
        printf("ERRO: Memoria Insuficiente");
        exit(1);
    }

    printf("\nInforme o nome do produto a adicionar: ");
    scanf("%s", nome);

    printf("\n\nInforme o código do produto: ");
    scanf("%d", &codigo);

    printf("\n\nInforme o preço do produto: ");
    scanf("%lf", &preco);

    novoProduto->nome = nome;
    novoProduto->codigo = codigo;
    novoProduto->preco = preco;
    novoProduto->proximo = NULL;

    if (*p == NULL) {
        *p = novoProduto;
        return
    }

    Node *temp = *p;

    while (temp->proximo != NULL) {
        temp = temp->next;
    }

    temp->next = novoProduto;
}

void exibirProdutos(Node *p) {
    Produto *atual = p;
    
}

void buscaProduto(Produto *p) {
    printf("Buscar produto");
}