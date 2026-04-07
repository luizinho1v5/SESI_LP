#include <stdio.h>

int main() {
    int contador = 0;

for(int i = 1; i <= 50; i++){
    if (i % 2 == 0) {
            contador++;
        }
    }

    printf("Existem %d numeros pares entre 1 e 50.\n", contador);
}
