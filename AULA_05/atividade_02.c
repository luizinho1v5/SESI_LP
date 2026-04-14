#include <stdio.h>

int main(){
    int idade[15];
    int jovem=0, adulto=0, idoso=0;
    
    
    for(int i = 0; i< 15; i++){
        printf("\n Digite sua idade %i: ", i+1);
        scanf("%i", &idade[i]);
        
        if(idade[i] <= 17){
            jovem++;
            
        }else if (idade[i] <=59){
            adulto++;
            
        }else{
            idoso++;
        }
    }
    
    printf("\n total de jovens: %i", jovem);
    printf("\n total de adultos: %i", adulto);
    printf("\n total de idosos: %i", idoso);
    
    if(jovem > adulto && jovem > idoso){
        printf("\no grupo maior é de jovens");
    }else if(adulto > idoso){
        printf("\no grupo maior é de adulto");
    }else{
        printf("\no grupo maior é de idoso");
    }
}