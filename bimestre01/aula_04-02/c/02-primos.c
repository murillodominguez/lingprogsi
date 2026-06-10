#include <stdio.h>

int main() {
    int n;

    int not_prime = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    int i = 2;

    while(i*i <= n) {
        if (n%i==0) {
           not_prime = 1;
        }
        ++i;
    }

    if (not_prime){
        printf("%d não é primo.\n", n);
    } else {
        printf("%d é primo.\n", n);
    }

    return 0;
}