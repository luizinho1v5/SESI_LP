#include <stdio.h>

int main() {
    int numero, i, soma;
    
    printf("Escolha um numero para saber a tabuada: ");
    scanf("%i", &numero);
    
    printf("a tabuada do %i é:\n", numero );
    
    for(int i = 1; i <= 10; i++) {
        soma = numero * i;
        printf("%i x %i = %i\n", numero, i, soma);
    }
}