#include <stdio.h>

int main() {
    int num[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o %i valor: ", i+1);
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 10; i++){
        if (num[i] % 2 == 0) {
            printf("O numero %i e par.\n", num[i]);
        }
    }
}