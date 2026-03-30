#include <stdio.h>

int main(){
    float nota1 , nota2 , nota3, media;
    
    
    printf("Digite a nota1: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota2: ");
    scanf("%f", &nota2);
    
    printf("Digite a nota3: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    
    if (media >= 7.0){
        printf("APROVADO");
    }
    else if (media <= 2.9){
        printf("REPROVADO");
    }else{
        printf("RECUPERAÇÂO");
    }
}