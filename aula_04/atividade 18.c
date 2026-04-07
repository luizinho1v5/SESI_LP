#include <stdio.h>

int main() {
    int idade, soma = 0, contador = 0;

    do {
        printf("Digite uma idade (0 para parar): ");
        scanf("%d", &idade);
        if (idade != 0) {
            soma += idade;
            contador++;
        }
    } while (idade != 0);

    if (contador > 0)
        printf("Media: %.2f\n", (float)soma / contador);
    else
        printf("Nenhuma idade foi informada.\n");
}
