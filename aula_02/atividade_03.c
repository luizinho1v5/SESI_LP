#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    if (n1 > n2) {
        printf("Maior: %.2f\n", n1);
    } else if (n2 > n1) {
        printf("Maior: %.2f\n", n2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}

