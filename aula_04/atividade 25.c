#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    printf("Notas de 100: %d\n", valor / 100);
    valor %= 100;

    printf("Notas de 50: %d\n", valor / 50);
    valor %= 50;

    printf("Notas de 20: %d\n", valor / 20);
    valor %= 20;

    printf("Notas de 10: %d\n", valor / 10);
    valor %= 10;

    printf("Notas de 5: %d\n", valor / 5);
    valor %= 5;

    printf("Notas de 1: %d\n", valor);
}