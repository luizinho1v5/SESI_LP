#include <stdio.h>

int main() {
    int v[10];
    int pares[10], impares[10];
    int i, p = 0, im = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0) {
            pares[p] = v[i];
            p++;
        } else {
            impares[im] = v[i];
            im++;
        }
    }

    printf("\nQuantidade de pares: %d\n", p);
    printf("Quantidade de impares: %d\n", im);

    printf("\nPares: ");
    for(i = 0; i < p; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nImpares: ");
    for(i = 0; i < im; i++) {
        printf("%d ", impares[i]);
    }

}