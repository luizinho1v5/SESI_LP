#include <stdio.h>

int main() {
float num [5];
int i;

for(i = 0; i < 5; i++){
printf("\nValores armazenados no vetor %i: ", i+1);
scanf("%f", &num[i]);
}

printf("\nValores Armazenados\n");
    for(i = 0; i < 5; i++){
        printf("Valor %i: %.2f\n", i+1, num[i]);
    }
}