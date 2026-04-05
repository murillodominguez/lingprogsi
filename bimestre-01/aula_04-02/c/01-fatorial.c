#include <stdio.h>

int main() {
    int n;
    int i;
    int result;

    printf("Digite um numero: ");
    scanf("%d",&n);

    i = n-1;
    result = n;

    while(i > 1) {
        result = result*i;
        --i;
    }

    printf("Fatorial de %d: %d\n", n, result);

    return 0;
}