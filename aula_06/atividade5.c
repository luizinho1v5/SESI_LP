#include <stdio.h>

int main() {
    float num[6];
    float menor;

    for(int i = 0; i < 6; i++){
        printf("Digite o numero %i: ", i+1);
        scanf("%f", &num[i]);
    }

    menor = num[0];

    for(int i = 0; i < 6; i++){
        if(num[i] < menor){
            menor = num[i];
        }
    }

    printf("O menor numero e: %.2f\n", menor);
}