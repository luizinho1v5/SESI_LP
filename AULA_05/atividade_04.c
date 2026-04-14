#include <stdio.h>

int main() {
    int v[10];
    int i, j, count;
    int dominante = -1;

    
    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }


    for(i = 0; i < 10; i++) {
        count = 0;
        for(j = 0; j < 10; j++) {
            if(v[i] == v[j]) {
                count++;
            }
        }
        if(count > 5) { 
            dominante = v[i];
            break;
        }
    }

    
    if(dominante != -1) {
        printf("Valor dominante: %d\n", dominante);
    } else {
        printf("Nao existe valor dominante\n");
    }
}