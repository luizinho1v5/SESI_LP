#include <stdio.h>

int main() {
	int matriz [3] [3];
	int somal[3] = {0};
	for(int l = 0; l < 3; l++) {
		for(int c = 0; c < 3; c++) {
			printf("\n Digite o numero de linha :%i, coluna: %i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
			somal[l] += matriz[l][c];
		}
	}
	for(int l = 0; l < 3; l++) {
		for(int c = 0; c < 3; c++) {
			printf(" | %i", matriz[l][c]);
		}
		printf("\n");
	}

	for(int i = 0; i < 3; i++) {
		printf("\nA soma da %i linha he: %i\n ", i+1, somal[i]);
	}

}