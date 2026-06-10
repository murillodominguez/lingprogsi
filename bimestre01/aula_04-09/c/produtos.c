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

void adicionarProduto(Node **headptr);

int checarExistencia(Node *head, int codigo);

void exibirProdutos(Node **headptr);

void buscaProduto(Node *head);

void liberarEspaco(Node *head);

int main() {
    printf("Bem-vindo ao Gestor de Produtos!\n\n");

    int loop = 1;
    Node *head = NULL, **headptr = &head;

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
                adicionarProduto(headptr);
                break;
            case 2:
                exibirProdutos(headptr);
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

void adicionarProduto(Node **headptr) {
    Node *novoProdutoPtr = (Node*)malloc(sizeof(Node));

    if (!novoProdutoPtr) {
        printf("ERRO: Memoria Insuficiente");
        exit(1);
    }

    printf("\n\nInforme o código do produto a adicionar: ");
    scanf("%d", &novoProdutoPtr->prod.codigo);

    if(checarExistencia(*headptr, novoProdutoPtr->prod.codigo)) {
        printf("\nJá existe um produto com esse código.\n");
        free(novoProdutoPtr);

        return;
    }

    printf("\nInforme o nome do produto: ");
    scanf(" %[^\n]", novoProdutoPtr->prod.nome);

    printf("\nInforme o preço do produto: ");
    scanf("%lf", &novoProdutoPtr->prod.preco);

    novoProdutoPtr->proximo = NULL;

    if (*headptr == NULL) {
        *headptr = novoProdutoPtr;
        return;
    }

    Node *temp = *headptr;
    
    while (temp->proximo != NULL) {
        temp = temp->proximo;
    }

    temp->proximo = novoProdutoPtr;
}

void exibirProdutos(Node **headptr) {
    Node *atual = *headptr;
    while (atual != NULL) {
        printf("\nProduto %d \nNome: %s\nPreço: R$%.2lf\n\n",  atual->prod.codigo, atual->prod.nome, atual->prod.preco);
        atual = atual->proximo;
    }
}

void buscaProduto(Node *head) {
    char nomeBusca[30];

    if (head != NULL) {
        printf("\n\nInforme o nome do produto para buscar: ");
        scanf(" %[^\n]", nomeBusca);
        int found = 0;
        while(head != NULL) {
            if (strstr(head->prod.nome, nomeBusca)) {
                printf("\nProduto encontrado:\nProduto %d\n%s\nR$%.2lf\n\n", head->prod.codigo, head->prod.nome, head->prod.preco);
                if (found == 0){
                    found = 1;
                }
            }
            head = head->proximo;
        }

        if (found) return;

        printf("\nProduto não encontrado\n\n");
        
        return;
    }

    printf("\nNão há produtos para buscar!\n\n");


}

int checarExistencia(Node *head, int codigo) {
    while (head != NULL) {
        if (head->prod.codigo == codigo) {
            return 1;
        }
        head = head->proximo;
    }

    return 0;
}

void liberarEspaco(Node *head) {
    while (head != NULL) {
        Node *temp;
        temp = head;
        head = head->proximo;
        free(temp);
    }
}