#include <stdio.h>

int main() {
	int matriz [5] [5];
	int soma = 0;
	int i;

	for(int l = 0; l < 5; l++) {
		for(int c = 0; c < 5; c++) {
			printf("\n Digite o numero de linha :%i, coluna: %i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);

		}
	}
	for(int i = 1; i < 5; i++)
		soma += matriz[i-1][i];
	printf("\n a soma da secundaria he: %i", soma);

	printf("\n");

}