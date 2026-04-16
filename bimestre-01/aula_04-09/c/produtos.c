#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto {
    char nome[30];
    int codigo;
    double preco;
} Produto;

typedef struct Node {
    Produto prod;
    struct Node *proximo;
} Node;

void adicionarProduto(Node *head);

int checarExistencia(Node *head);

void exibirProdutos(Node *head);

void buscaProduto(Node *head);

void liberarEspaco(Node *head);

int main() {
    printf("Bem-vindo ao Gestor de Produtos!\n\n");

    int loop = 1;
    Node *head = NULL;

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
                adicionarProduto(head);
                break;
            case 2:
                exibirProdutos(head);
                break;
            case 3:
                buscaProduto(head);
                break;
            case 4:
                loop = 0;
                break;
            default:
                printf("\nPor favor, digite uma opção válida!\n\n");
                continue;
        }
    }

    liberarEspaco(head);

    return 0;
}

void adicionarProduto(Node *head) {
    char nome[30];
    int codigo;
    double preco;
    Node *novoProdutoPtr = (Node*)malloc(sizeof(Node));

    if (!novoProdutoPtr) {
        printf("ERRO: Memoria Insuficiente");
        exit(1);
    }

    printf("\nInforme o nome do produto a adicionar: ");
    scanf("%s", novoProdutoPtr->prod.nome);

    printf("\n\nInforme o código do produto: ");
    scanf("%d", &novoProdutoPtr->prod.codigo);

    printf("\n\nInforme o preço do produto: ");
    scanf("%lf", &novoProdutoPtr->prod.preco);

    novoProdutoPtr->proximo = NULL;

    if (head == NULL) {
        head = novoProdutoPtr;
        printf("primeiro endereço: %p", head);
        return;
    }

    Node *temp = head;
    
    while (temp->proximo != NULL) {
        temp = temp->proximo;
    }

    temp->proximo = novoProdutoPtr;

    printf("endereço temp: %p", temp->proximo);
}

void exibirProdutos(Node *head) {
    Node *atual = head;
    while (atual != NULL) {
        printf("\nProduto %d \nNome: %s\nPreço: %.2lf",  atual->prod.codigo, atual->prod.nome, atual->prod.preco);
        atual = atual->proximo;
    }
}

void buscaProduto(Node *head) {
    printf("Buscar produto");
}

void liberarEspaco(Node *head) {
    if (head != NULL) {
        free(head);
        if (head->proximo != NULL) {
            Node *temp = head;
            while (temp->proximo != NULL) {
                free(temp);
            }
        }
    }
}