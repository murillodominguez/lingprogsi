#include <stdio.h>

int main() {
    float fahr, celsius;

    printf("Informe a temperatura em fahrenheit: ");
    scanf("%f", &fahr);

    celsius = (fahr - 32) * 5 / 9;

    printf("%.2f fahrenheit para celsius fica: %.2f °C\n", fahr, celsius);

    return 0;
}