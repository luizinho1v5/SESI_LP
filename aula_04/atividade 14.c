#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Me diga um numero para começar a contagem regressiva: ");
    scanf("%i", &numero);
    
int x =numero;
do{
    printf("%i\n", x);
    x--;
}while(x >= 0);
}

