#include <stdio.h>

int main() {
    int num;


    printf("Digite um número inteiro: ");
    scanf("%d", &num);


    if (num > 0) {
        printf("%d é Positivo.\n", num);
    } else if (num < 0) {
        printf("%d é Negativo.\n", num);
    } else {
        printf("O número é Zero.\n");
    }

    return 0;
}



