#include <stdio.h>

int main() {
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);


    if (ano % 4 == 0) {
        printf("O ano %d e um ano de eleicao!\n", ano);
    } 
    else {
        printf("O ano %d nao e um ano de eleicao.\n", ano);
    }
}
