#include <stdio.h>

int main() {
    float kwh, total;
    printf("Digite o consumo em kWh: ");
    scanf("%f", &kwh);

    if (kwh <= 100) {
        total = kwh * 0.50;
    } else if (kwh <= 200) {
        total = kwh * 0.75;
    } else {
        total = kwh * 1.00;
    }

    printf("Valor total da conta: R$ %.2f\n", total);
    return 0;
}