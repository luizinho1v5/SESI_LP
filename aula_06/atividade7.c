#include <stdio.h>

int main() {
    float num[10], soma = 0, media = 0;
    int i;
    
    for(i = 0; i < 10; i++){
        printf("Digite numero %i: ", i+1);
        scanf("%f", &num[i]);
        
        soma += num[i];
    }

    media = soma / 10;
    printf("A media total e: %.2f\n", media);
}
