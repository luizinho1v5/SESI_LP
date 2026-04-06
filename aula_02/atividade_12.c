#include <stdio.h>

int main() {
    float salario, salarioFinal;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);


    if (salario > 3000.00) {

        salarioFinal = salario * 1.05;
    } 
    else {

        salarioFinal = salario * 1.10;
    }

    printf("O salario final com bonus e: R$ %.2f\n", salarioFinal);

    return 0;
}

