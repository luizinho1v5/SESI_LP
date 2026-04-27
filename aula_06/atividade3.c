#include <stdio.h>

int main() {
    float soma = 0;
    int num[8];
    int i;

for(i = 0; i < 8; i++){
    printf("Digite num %i: ", i+1);
    scanf("%i", &num[i]);
    soma += num[i];
}
printf("A soma total e: %.2f\n", soma);
}