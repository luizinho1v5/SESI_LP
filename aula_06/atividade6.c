#include <stdio.h>

int main() {
    float num[10];
    int positivos = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite num %i: ", i+1);
        scanf("%f", &num[i]);

        if(num[i] > 0){
            positivos++;
        }
    }

    printf("Quantidade de numeros positivos: %d\n", positivos);
}