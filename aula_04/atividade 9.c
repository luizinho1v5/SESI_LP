#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Escolha um numero: ");
    scanf("%i", &numero);
    
    printf("Numeros antecessores de %i:\n ", numero);
    
    for(int i =1; i < numero; i++) {
        printf("%i\n", i);
    }
}