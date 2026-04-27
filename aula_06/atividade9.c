#include <stdio.h>

int main() {
    float num[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite numero %i: ", i+1);
        scanf("%f", &num[i]);

        if(num[i] < 0){
            num[i] = 0;
        }
    }

    printf("\nValores apos substituicao:\n");
    for(i = 0; i < 10; i++){
        printf("%.2f\n", num[i]);
    }
}