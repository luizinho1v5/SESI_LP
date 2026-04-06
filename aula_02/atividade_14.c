#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 9.0) {
        printf("Conceito: A\n");
    } else if (nota >= 7.0) {
        printf("Conceito: B\n");
    } else if (nota >= 5.0) {
        printf("Conceito: C\n");
    } else {
        printf("Conceito: D\n");
    }
}
