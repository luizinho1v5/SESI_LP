#include <stdio.h>

int main() {
    float num[6];
    float maior;

    for(int i = 0; i < 6; i++){
        printf("Digite o numero %i: ", i+1);
        scanf("%f", &num[i]);
    }

    maior = num[0];

    for(int i = 0; i < 6; i++){
        if(num[i] > maior){
            maior = num[i];
        }
    }

    printf("O maior numero e: %.2f\n", maior);
}