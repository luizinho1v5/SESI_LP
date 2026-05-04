#include <stdio.h>

int main(){
    int matriz [3] [3];

for(int l = 0; l < 3; l++){
    for(int c = 0; c < 3; c++){
        printf("\n Digite o numero de linha :%i, coluna: %i: ", l+1, c+1);
        scanf("%i", &matriz[l][c]);

    }
}
for(int l = 0; l < 3; l++){
    for(int c = 0; c < 3; c++){
        printf(" | %i", matriz[l][c]);
    }
    printf("\n");
}
printf("Os numeros da diagonal principal são: ");
for(int i = 0; i < 3; i++){
        printf(" | %i", matriz[i][i]);

}

}