#include <stdio.h>

int main(){
    int matriz [2] [2];
    int soma=0;

for(int l = 0; l < 2; l++){
    for(int c = 0; c < 2; c++){
        printf("\n Digite o numero de linha :%i, coluna: %i: ", l+1, c+1);
        scanf("%i", &matriz[l][c]);
        soma += matriz[l][c];
    }
}


        printf(" | %i", soma);
    
    printf("\n");

}