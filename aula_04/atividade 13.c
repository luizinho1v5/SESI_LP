#include <stdio.h>

int main() {
    int soma=0;
    
    for(int i = 1; i <= 100; i+=2) {
        soma += i;
}
 printf("A soma de numeros impar de 1 até 100 é: %d\n", soma);
}

