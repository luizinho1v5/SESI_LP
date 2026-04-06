#include <stdio.h>

int main() {
    float peso;
    printf("Digite o peso da encomenda (kg): ");
    scanf("%f", &peso);

    if (peso <= 5) {
        printf("Valor do frete: R$ 10,00\n");
    } else if (peso <= 20) {
        printf("Valor do frete: R$ 20,00\n");
    } else {
        printf("Valor do frete: R$ 50,00\n");
    }

    return 0;
}