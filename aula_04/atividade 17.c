#include <stdio.h>

int main() {
    int num, contador = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num >= 0) contador++;
    } while (num >= 0);

    printf("Quantidade de numeros digitados: %d\n", contador);
}

