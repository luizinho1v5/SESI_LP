#include <stdio.h>

int main() {
    int num, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1) primo = 0;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");
}