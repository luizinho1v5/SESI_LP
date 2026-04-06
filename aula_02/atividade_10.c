#include <stdio.h>

int main() {
    float peso, altura, imc;


    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);


    imc = peso / (altura * altura);


    printf("\nIMC calculado: %.2f\n", imc);


    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificacao: Normal\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        // IMC >= 30
        printf("Classificacao: Obesidade\n");
    }
}



