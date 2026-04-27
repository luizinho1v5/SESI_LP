#include <stdio.h>

int main() {
    float num[10];
     float temp;

    for(int i = 0; i < 10; i++){
        printf("Digite numero %i: ", i+1);
        scanf("%f", &num[i]);

}
for(int i = 0; i < 10; i++){
        for(int j = 0; j < 9; j++){
            if(num[j] > num[j+1]){
             
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    
    printf("\nNumeros em ordem crescente:\n");
    for(int i = 0; i < 10; i++){
        printf("%.2f ", num[i]);
    }
}