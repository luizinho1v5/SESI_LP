#include <stdio.h>

int main() {
	int matriz [5] [5];
	int c;

	for(int l = 0; l < 5; l++) {
		for(int c = 0; c < 5; c++) {
			printf("\n Digite o numero de linha :%i, coluna: %i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
			if(matriz[l][c] < 0) {
				matriz[l][c] = 0;
			}
		}
	}

	for(int l = 0; l < 5; l++) {
		for(int c = 0; c < 5; c++) {
			printf(" | %i", matriz[l][c]);



		}
		printf("\n");
	}
}
