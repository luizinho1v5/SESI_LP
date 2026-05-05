#include <stdio.h>
int somadedoisvalores(int a, int b) {
	return a+b;
}
int subtracaodedoisvalores(int a, int b) {
	return a-b;
}
int multiplicacaodedoisvalores(int a, int b) {
	return a*b;
}
int divisaodedoisvalores(int a, int b) {
	return a/b;
}

int main() {
	int n1,n2;
	int operacao;
	int resultado = 0;
	
	printf("----------------------------- CALCULADORA AURA INFINITA -------------------------");
	printf("\nDigite o primeiro valor: ");
	scanf("%i", &n1);

	printf("Digite o segundo valor: ");
	scanf("%i", &n2);
	

	printf("escolha a operacao(1-soma, 2-subtracao, 3-multiplicacao, 4-divisao): ");
	scanf("%i", &operacao);
	if(operacao == 1) {
		resultado = somadedoisvalores(n1, n2);
	}
	else if(operacao == 2) {
		resultado = subtracaodedoisvalores(n1, n2);
	} else if (operacao == 3) {
		resultado = multiplicacaodedoisvalores(n1, n2);
	}
	else if (operacao == 4) {
		if (n2 == 0) {
			printf("Erro: Divisao por zero nao permitida.\n");
		}
		resultado = divisaodedoisvalores(n1, n2);
	}
	printf("Resultado: %i\n", resultado);
}