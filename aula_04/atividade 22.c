#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("Numero valido: %d\n", num);
}