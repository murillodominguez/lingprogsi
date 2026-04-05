#include <stdio.h>

int main() {
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    int i = 1;
    int c = 1;

    while(c <= n) {
        if (i%2 == 1) {
            printf("%d\n", i);
            ++c;
        }

        ++i;
    }
}