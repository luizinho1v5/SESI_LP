#include <stdio.h>

int main() {
    float valorCompra, valorFinal;

 
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);


    if (valorCompra > 100.0) {

        valorFinal = valorCompra * 0.90;
    } else {

        valorFinal = valorCompra * 0.95;
    }

    
    printf("O valor final com desconto e: R$ %.2f\n", valorFinal);
}


