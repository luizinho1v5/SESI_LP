#include <stdio.h>

int main() {
    float val[6];
    float maioral = 0, maior2 = 0;
    int i;
    
    
    for(int i = 0; i < 6; i++){
        printf("Digite o %i valor: ", i+1);
        scanf("%f", &val[i]);
    }
    for(int i = 0; i < 6; i++){
        if(val[i] > maioral){
            maioral = val[i];
        }
    }
    for(int i = 0; i < 6; i++){
    if(val[i] < maioral){
        if(val[i] > maior2){
        
    maior2 = val[i];
        }
    }
    }
    printf("%f e %f", maioral, maior2);
}