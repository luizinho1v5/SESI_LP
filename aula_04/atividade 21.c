#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n1 - Ola\n2 - Tudo bem?\n3 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Ola!\n");
                break;
            case 2:
                printf("Tudo bem?\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);
}