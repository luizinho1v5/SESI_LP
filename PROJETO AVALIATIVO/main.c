#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMPAR_TELA "clear"

void barraVida(int vida, int maxVida) {
	int totalBlocos = 20;
	int preenchidos = (vida * totalBlocos) / maxVida;

	printf("HP [");

	for(int i = 0; i < totalBlocos; i++) {
		if(i < preenchidos) {
			printf("█");
		} else {
			printf(" ");
		}
	}

	printf("] %d/%d", vida, maxVida);
}

void ladoes(int lado) {

	if (lado == 0) {
		printf("Direita");
	}
	else if (lado == 1) {
		printf("Meio");
	}
	else if (lado == 2) {
		printf("Esquerda");
	}
	else {
		printf("Invalido");
	}
}

int main() {
	int vidaPlayer = 100;
	int vidaBot = 100;
	int maxVida = 100;
	// joguinho de luta/esquiva/cura
	srand(time(NULL));

	int vida = 100, vidabot = 100;
	int esquiva = 1;
	int botataque = 1;
	int perdavida = 0;
	int acao, forca;

	for(int i = 0; i < 20; i++) {

		printf("=========================================\n");
		printf("         JOGO DA ESQUIVA\n");
		printf("=========================================\n");

		printf("\n=========================================\n");
		printf("          VIDA DOS PlAYERS\n");
		printf("=========================================\n");

		printf("\nPLAYER ");
		barraVida(vidaPlayer, maxVida);

		printf("\nBOT    ");
		barraVida(vidaBot, maxVida);

		printf("\n=========================================\n");


		printf("\n[1] DESVIAR");
		printf("\n[2] CURAR");
		printf("\n[3] ATACAR");

		printf("\n\nEscolha sua acao: ");
		scanf("%i", &acao);

		//desviar

		if(acao == 1) {

			printf("\n=========================================\n");
			printf("             DESVIAR\n");
			printf("=========================================\n");

			printf("\n[0] Direita");
			printf("\n[1] Meio");
			printf("\n[2] Esquerda");

			printf("\n\nEscolha: ");

			scanf("%i", &esquiva);

			botataque = rand() % 3;

			printf("\n=========================================\n");
			printf("BOT atacou na: ");
			ladoes(botataque);
			printf("\n=========================================\n");

			if(botataque == esquiva) {

				perdavida = (rand() % 6) + 35;

				printf("\n=========================================");
				printf("\n        VOCE FOI ACERTADO!");
				printf("\n=========================================");

				printf("\n\nVoce perdeu %i de vida.", perdavida);
				printf("\n=========================================\n");

				vidaPlayer -= perdavida;
			}
			else {

				perdavida = (rand() % 4) + 7;

				printf("\n=========================================");
				printf("\n        ESQUIVA PERFEITA!");
				printf("\n=========================================");

				printf("\n\nO bot perdeu %i de vida.", perdavida);
				printf("\n=========================================\n");

				vidaBot -= perdavida;
			}

			printf("\nPressione ENTER para continuar...");
			getchar();
			getchar();

			system(LIMPAR_TELA);

		}

		//cura

		else if(acao == 2) {

			esquiva = 1;

			vida += 20;

			printf("\n=========================================\n");
			printf("               CURA\n");
			printf("=========================================\n");

			printf("\nVoce recuperou 20 de vida!\n");

			botataque = rand() % 3;

			printf("\nBOT atacou na: ");
			ladoes(botataque);

			if(botataque == esquiva) {

				perdavida = (rand() % 6) + 35;

				printf("\n=========================================");
				printf("\n        VOCE FOI ACERTADO!");
				printf("\n=========================================");

				printf("\n\nVoce perdeu %i de vida.", perdavida);
				printf("\n=========================================\n");

				vidaPlayer -= perdavida;
			}
			else {

				perdavida = (rand() % 4) + 7;

				printf("\n=========================================");
				printf("\n          BOT ERROU!");
				printf("\n=========================================");

				printf("\n\nO bot perdeu %i de vida.", perdavida);
				printf("\n=========================================\n");

				vidaBot -= perdavida;
			}

			printf("\nPressione ENTER para continuar...");
			getchar();
			getchar();

			system(LIMPAR_TELA);
		}

		//ataque

		else if(acao == 3) {

			esquiva =1;

			printf("\n=========================================\n");
			printf("              ATAQUE\n");
			printf("=========================================\n");

			printf("\n[1] Ataque Fraco");
			printf("\n[2] Ataque Forte");

			printf("\n\nEscolha o ataque: ");

			scanf("%i", &forca);

			if(forca==1) {

				forca = rand() % 5;

				if(forca !=0) {

					perdavida = (rand() % 6) + 8;

					vidaBot -= perdavida;

					printf("\n=========================================");
					printf("\n         ATAQUE ACERTOU!");
					printf("\n=========================================");

					printf("\n\nO bot perdeu %i de vida.", perdavida);
					printf("\n=========================================\n");
				}
				else {

					printf("\n=========================================");
					printf("\n           VOCE ERROU!");
					printf("\n=========================================\n");
				}

				botataque = rand() % 3;

				printf("\nBOT atacou na: ");
				ladoes(botataque);

				if(botataque == esquiva) {

					perdavida = (rand() % 6) + 35;

					printf("\n=========================================");
					printf("\n        VOCE FOI ACERTADO!");
					printf("\n=========================================");

					printf("\n\nVoce perdeu %i de vida.", perdavida);
					printf("\n=========================================\n");

					vidaPlayer -= perdavida;
				}

				printf("\nPressione ENTER para ir para a proxima rodada!");
				getchar();
				getchar();

				system(LIMPAR_TELA);
			}

			else if(forca == 2) {

				forca = rand() % 6;

				if(forca == 1) {

					perdavida = (rand() % 6) + 40;

					vidaBot -= perdavida;

					printf("\n=========================================");
					printf("\n        VOCE ACERTOU!");
					printf("\n=========================================");

					printf("\n\nO bot perdeu %i de vida.", perdavida);
					printf("\n=========================================\n");
				}
				else {

					printf("\n=========================================");
					printf("\n           VOCE ERROU!");
					printf("\n=========================================\n");
				}

				botataque = rand() % 3;

				if(botataque == esquiva) {

					perdavida = (rand() % 6) + 35;

					printf("\n=========================================");
					printf("\n          O BOT ACERTOU!");
					printf("\n=========================================");

					printf("\n\nVoce perdeu %i de vida.", perdavida);
					printf("\n=========================================\n");

					vidaPlayer -= perdavida;
				}
				else {
					printf("\n=========================================");
					printf("\n          O BOT ERROU!");
					printf("\n=========================================");
				}
				printf("\nPressione ENTER para ir para a proxima rodada!");
				getchar();
				getchar();

				system(LIMPAR_TELA);
			}

		}

		//acao invalida

		else {

			printf("\n=========================================");
			printf("\n          OPCAO INVALIDA!");
			printf("\n=========================================\n");

			printf("\nPressione ENTER para continuar...");
			getchar();
			getchar();

			system(LIMPAR_TELA);
		}

		//fim

		if(vidaPlayer <= 0) {

			system(LIMPAR_TELA);

			printf("\n\n");
			printf("#####################################\n");
			printf("#                                   #\n");
			printf("#            GAME OVER              #\n");
			printf("#                                   #\n");
			printf("#####################################\n");

			printf("\nVoce perdeu para o bot!\n");

			break;
		}

		if(vidaBot <= 0) {

			system(LIMPAR_TELA);

			printf("\n\n");
			printf("#####################################\n");
			printf("#                                   #\n");
			printf("#          VOCE GANHOU!             #\n");
			printf("#                                   #\n");
			printf("#####################################\n");

			printf("\nVoce derrotou o bot!\n");

			break;
		}

	}

	return 0;
}