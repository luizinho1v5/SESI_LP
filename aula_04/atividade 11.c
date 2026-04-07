#include <stdio.h>

int main() {
    int numero, i;
   unsigned long long fatorial = 1;


    printf("Digite um numero e te direi o fatorial dele: ");
    scanf("%i", &numero);
    
for(int i = 1; i <= numero; i++ ){
    fatorial *= i;
}

printf("o fatorial de %i = %llu", numero, fatorial);
}
