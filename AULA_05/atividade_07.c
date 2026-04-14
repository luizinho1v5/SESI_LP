#include <stdio.h>

int main() {
    float saques[10];
    float total = 0, maior;
    int i, acima500 = 0;

    printf("Digite 10 valores de saques:\n");
    for(i = 0; i < 10; i++) {
        scanf("%f", &saques[i]);
        total += saques[i];

        if(i == 0 || saques[i] > maior) {
            maior = saques[i];
        }

        if(saques[i] > 500) {
            acima500++;
        }
    }

    printf("\nTotal sacado: R$ %.2f\n", total);
    printf("Maior saque: R$ %.2f\n", maior);
    printf("Saques acima de R$ 500: %d\n", acima500);
}