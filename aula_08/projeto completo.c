#include <stdio.h>

float somadedoisvalores(float a, float b) {
    return a + b;
}
float subtracaodedoisvalores(float a, float b) {
    return a - b;
}
float multiplicacaodedoisvalores(float a, float b) {
    return a * b;
}
float divisaodedoisvalores(float a, float b) {
    return a / b;
}

int main() {
    float n1, n2;
    int operacao;
    float resultado = 0;

    do {
        printf("\n----------------------------- CALCULADORA AURA INFINITA -------------------------");
        printf("\n Escolha a operacao: ");
        printf("\n1- soma");
        printf("\n2- subtracao");
        printf("\n3- multiplicacao");
        printf("\n4- divisao");
        printf("\n0- sair");
        printf("\nSelecione uma Opcao: ");
        scanf("%i", &operacao);
        if (operacao != 0 && operacao >= 1 && operacao <= 4) {
            printf("\nDigite o primeiro valor: ");
            scanf("%f", &n1);

            printf("Digite o segundo valor: ");
            scanf("%f", &n2);

            switch(operacao) {
                case 1:
                    resultado = somadedoisvalores(n1, n2);
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 2:
                    resultado = subtracaodedoisvalores(n1, n2);
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 3:
                    resultado = multiplicacaodedoisvalores(n1, n2);
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 4:
                    if (n2 == 0) {
                        printf("Erro: Divisao por zero nao permitida.\n");
                    } else {
                        resultado = divisaodedoisvalores(n1, n2);
                        printf("Resultado: %.2f\n", resultado);
                    }
                    break;
            }
        } 
        else if (operacao != 0) {
            printf("Opcao invalida!\n");
        }
    } while (operacao != 0); 

    printf("\nPrograma finalizado! Ate mais.\n");
}