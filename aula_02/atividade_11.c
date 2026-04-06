#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);


    if (num2 == 0) {
        printf("Erro: Divisao por zero nao e permitida.\n");
    } 
    else if (num1 % num2 == 0) {
        printf("%d é multiplo de %d.\n", num1, num2);
    } 
    else {
        printf("%d nao é multiplo de %d.\n", num1, num2);
    }
}



