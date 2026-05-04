#include <stdio.h>

int main() {
	int matriz [4] [4];
	float maior = 0;
	float menor = 32323232323232;
	for(int l = 0; l < 4; l++) {
		for(int c = 0; c < 4; c++) {
			printf("\n Digite o numero de linha :%i, coluna: %i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
			if(matriz[l][c] > maior) {

				maior = matriz[l][c];
			}
			if(matriz[l][c] < menor) {
				menor = matriz[l][c];
			}

		}
	}
	for(int l = 0; l < 4; l++) {
		for(int c = 0; c < 4; c++) {
			printf(" | %i", matriz[l][c]);
		}
		printf("\n");
	}


	printf("\n o menor e o maior numero são: %f e %f", menor, maior);


}