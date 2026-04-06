#include <stdio.h>

int main(){

 int data_de_nascimento, idade_real;
 
 printf("Qual sua data de nascimento: ");
 scanf("%i", &data_de_nascimento);
 
 idade_real = 2026 - data_de_nascimento;
 
 if (idade_real<= 12) {
     printf("Você tem %i, você é uma criança", idade_real);
 }
 
 else if (idade_real&&idade_real<= 17) {
     printf("Você tem %i, você é um adolescente", idade_real);
}

else if (60<=idade_real) {
    printf("você tem %i, você é um idoso", idade_real);
}
}