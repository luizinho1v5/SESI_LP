#include <stdio.h>

int main(){
    int matriz [4] [4];
    int maiorquedez = 0;

for(int l = 0; l < 4; l++){
    for(int c = 0; c < 4; c++){
        printf("\n Digite o numero de linha :%i, coluna: %i: ", l+1, c+1);
        scanf("%i", &matriz[l][c]);
if(matriz[l][c] > 10){
    maiorquedez++;
}
    }
}
for(int l = 0; l < 4; l++){
    for(int c = 0; c < 4; c++){
        printf(" | %i", matriz[l][c]);
    }
    printf("\n");
}

printf("\ntem %i numero(s) maiorquedez\n", maiorquedez);
    
    printf("\n");

}