#include <stdio.h>

int main() {
    int vel;
    printf("Digite a velocidade do carro: ");
    scanf("%d", &vel);

    if (vel <= 60) {
        printf("Situacao: Sem multa.\n");
    } else if (vel <= 80) {
        printf("Situacao: Multa leve.\n");
    } else if (vel <= 100) {
        printf("Situacao: Multa grave.\n");
    } else {
        printf("Situacao: Multa gravissima!\n");
    }

    return 0;
}