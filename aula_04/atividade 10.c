#include <stdio.h>

int main() {
    int n1, n2, i, menor, maior;

    printf("Digite dois numeros: ");
    scanf("%i %i", &n1, &n2);
    
    if (n1 < n2){
        menor = n1;
        maior = n2;
    }
    else{
        menor = n2;
        maior = n1;
    }
    printf("numeros entre %i e %i:\n", menor, maior);
    
    for(int i = menor + 1; i < maior; i++){
        printf("%i\n", i);
    }
}
