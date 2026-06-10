#include <stdio.h>

int main() {
    char frase[101];
    char palavra[101];

    printf("Digite uma frase: ");
    fgets(frase, 101, stdin);

    printf("%s", frase);

    printf("Digite uma palavra: ");
    fgets(palavra, 101, stdin);

    int c = 0;

    while (frase[c] != '\0') {
        c++;
    }
    int fraselen = c-1;

    c = 0;
    while (palavra[c] != '\0') {
        c++;
    }
    int palavralen = c-1;

    c = 0;

    int appearances = 0;

    for (int i = 0; i <= fraselen - palavralen; i++) {
        for(int j = 0; j < palavralen; j++) {
            if (frase[i+j] != palavra[j]) {
                break;
            }
            if (j == palavralen - 1) {
                appearances++;
            }
        }
    }

    printf("A palavra %s tem %d ocorrências na frase.\n", palavra, appearances);

    return 0;
}