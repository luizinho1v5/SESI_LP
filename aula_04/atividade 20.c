#include <stdio.h>

int main() {
    int senha = 1234, tentativa;

    do {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
    } while (tentativa != senha);

    printf("Acesso permitido!\n");
}