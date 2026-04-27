#include <stdio.h>

int main() {
    float num[10];
     float troca;

    for(int i = 0; i < 10; i++){
        printf("Digite numero %i: ", i+1);
        scanf("%f", &num[i]);
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 9; j++){
        if (num[j] > num[j+1]){
            
            troca = num[j];
            num[j] = num[j+1];
            num[j+1] = troca;
    
}
}
}


printf("\nNumeros em ordem crescente: \n");
for(int i = 0; i < 10; i++){
    printf("%.2f \n", num[i]);
}
}