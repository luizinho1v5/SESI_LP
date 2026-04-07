#include <stdio.h>

int main() {
    int num, maior = -999999;

    do {
        printf("Digite um numero (999 para parar): ");
        scanf("%d", &num);
        if (num != 999 && num > maior) {
            maior = num;
        }
    } while (num != 999);

    printf("Maior numero: %d\n", maior);
}