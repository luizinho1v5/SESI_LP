#include <stdio.h>

int main() {
	int matriz [2] [2];
	int matriz2 [2] [2];
	int soma = 0;
	int soma2 = 0;

	for(int l = 0; l < 2; l++) {
		for(int c = 0; c < 2; c++) {
			printf("\n Digite o numero de linha :%i, coluna: %i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
			soma += matriz[l][c];
		}
	}
	printf("\n");
	printf("SEGUNDA MATRIZ");
	printf("\n");
	for(int l = 0; l < 2; l++) {
		for(int c = 0; c < 2; c++) {
			printf("\n Digite o numero de linha :%i, coluna: %i: ", l+1, c+1);
			scanf("%i", &matriz2[l][c]);
			soma2 += matriz2[l][c];
		}
	}
	printf("\n A multiplicação das duas matrizes he: %i", (soma2*soma));

	printf("\n");

}