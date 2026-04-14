#include <stdio.h>

int main() {
    int v[12];
    int i;
    int crescente = 1, decrescente = 1;

  
    printf("Digite 12 valores inteiros:\n");
    for(i = 0; i < 12; i++) {
        scanf("%d", &v[i]);
    }


    for(i = 0; i < 11; i++) {
        if(v[i] < v[i + 1]) {
            decrescente = 0;
        }
        if(v[i] > v[i + 1]) {
            crescente = 0;
        }
    }

  
    if(crescente) {
        printf("Ordem crescente\n");
    } else if(decrescente) {
        printf("Ordem decrescente\n");
    } else {
        printf("Desordenado\n");
    }
}