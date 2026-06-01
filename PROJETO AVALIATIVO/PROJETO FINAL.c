#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#define LIMPAR_TELA "clear"
#define MAX_RANK 5

void barraVida(int vida, int maxVida) {
	int totalBlocos = 20;
	int preenchidos = (vida * totalBlocos) / maxVida;

	printf("HP [");
	for(int i = 0; i < totalBlocos; i++) {
		if(i < preenchidos) printf("█");
		else printf(" ");
	}
	printf("] %d/%d", vida, maxVida);
}

void ladoes(int lado) {
	if (lado == 0) printf("Direita");
	else if (lado == 1) printf("Meio");
	else if (lado == 2) printf("Esquerda");
	else printf("Invalido");
}

int main() {
	int rodadas = 0;
	int começo = 0;
	int maior = 50;
	char primeiro[50];

	int vidaPlayer = 100;
	int vidaBot = 100;

	int maxVida = 100;
	int maxVidaBot = 100;

	srand(time(NULL));

	char nome[50];
	int esquiva = 1;
	int botataque = 1;
	int perdavida = 0;
	int forca;
	int acao;

	int dificuldade;
	int desviar = 3;
	int danoBot = 20;
	int danoPlayer = 20;
	int danoPlayer1 = 10;

	char historico[20][50];
	int totalHistorico = 0;
	char rankingNomes [3][MAX_RANK][50];
	int rankingRodadas[3][MAX_RANK];
	int totalRank[3] = {0,0,0};


	do {
		rodadas = 0;
		vidaPlayer = 100;
		vidaBot = 100;
		maxVida = 100;
		maxVidaBot = 100;

		printf("\nDIGITE SEU NOME: ");
		scanf("%49s", nome);

		for(int i = 0; nome[i] != '\0'; i++) {
			nome[i] = toupper(nome[i]);
		}

		printf("\nESCOLHA A DIFICULDADE\n");
		printf("[1] FACIL\n[2] NORMAL\n[3] DIFICIL\n");
		printf("Escolha: ");
		scanf("%i", &dificuldade);
		int dif = dificuldade - 1;


		system(LIMPAR_TELA);

		if(dificuldade == 1) {
			desviar = 3;
			danoBot = 15;
			vidaBot = 100;
			maxVidaBot = 100;

		}
		else if(dificuldade == 2) {
			desviar = 6;
			danoBot = 25;
			maxVidaBot = 150;
			vidaBot = 150;

		}
		else {
			desviar = 16;
			danoBot = 30;
			maxVidaBot = 175;
			vidaBot = 175;

		}

		for(int i = 0; i < 20; i++) {
			rodadas++;

			printf("=========================================\n");
			printf("           COMPILER FIGHT!\n");
			printf("=========================================\n");
			printf("=========================================\n");
			printf("           VIDA DOS PLAYERS\n");
			printf("=========================================\n");
			printf("\n%s   ", nome);
			barraVida(vidaPlayer, maxVida);
			printf("\nBOT   ");
			barraVida(vidaBot, maxVidaBot);

			printf("\n=========================================\n");

			printf("\n[1] DESVIAR");
			printf("\n[2] CURAR");
			printf("\n[3] ATACAR");
			printf("\n[4] HISTORICO");
			printf("\n[5] MANUAL");
			printf("\n[0] SAIR");
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

				if(esquiva < 0 || esquiva > 2) {
					printf("\n=========================================");
					printf("\n          OPCAO INVALIDA!");
					printf("\n=========================================\n");
					printf("\nPressione ENTER para continuar...");
					getchar();
					getchar();
					system(LIMPAR_TELA);
				}

				else {
					botataque = rand() % 3;
					printf("\n=========================================\n");
					printf("BOT atacou na: ");
					ladoes(botataque);
					printf("\n=========================================\n");

					if(botataque == esquiva) {
						perdavida = (rand() % 6) + danoBot;
						printf("\n=========================================");
						printf("\n        VOCE FOI ACERTADO!");
						printf("\n=========================================");
						printf("\n\nVoce perdeu %i de vida.", perdavida);
						printf("\n=========================================\n");
						if(totalHistorico < 20) {
							sprintf(historico[totalHistorico],
							        "Jogador perdeu %i de vida", perdavida);
							totalHistorico++;
						}
						vidaPlayer -= perdavida;
					}
					else {

						perdavida = (rand() % 4) + desviar;
						printf("\n=========================================");
						printf("\n        ESQUIVA PERFEITA!");
						printf("\n=========================================");
						printf("\n\nO bot perdeu %i de vida.", perdavida);
						printf("\n=========================================\n");
						if(totalHistorico < 20) {
							sprintf(historico[totalHistorico],
							        "O bot perdeu %i de vida", perdavida);
							totalHistorico++;
						}
						vidaBot -= perdavida;
					}
					printf("\nPressione ENTER para continuar...");
					getchar();
					getchar();
					system(LIMPAR_TELA);
				}
			}
			//cura
			else if(acao == 2) {
				if(vidaPlayer >= maxVida) {
					printf("\n=========================================");
					printf("\n          OPCAO INVALIDA!");
					printf("\n=========================================\n");
					printf("\nPressione ENTER para continuar...");
					getchar();
					getchar();
					system(LIMPAR_TELA);
				}
				else if (vidaPlayer < maxVida) {
					esquiva = 1;
					vidaPlayer += 20;

					printf("\n=========================================\n");
					printf("               CURA\n");
					printf("=========================================\n");
					printf("\nVoce recuperou 20 de vida!\n");

					if
					(totalHistorico < 20) {
						sprintf(historico[totalHistorico],
						        "Jogador curou vida");
						totalHistorico++;
					}
					botataque = rand() % 3;
					printf("\nBOT atacou na: ");
					ladoes(botataque);

					if(botataque == esquiva) {
						perdavida = (rand() % 6) + danoBot;

						printf("\n=========================================");
						printf("\n        VOCE FOI ACERTADO!");
						printf("\n=========================================");
						printf("\n\nVoce perdeu %i de vida.", perdavida);
						printf("\n=========================================\n");
						if(totalHistorico < 20) {
							sprintf(historico[totalHistorico],
							        "Jogador perdeu %i de vida", perdavida);
							totalHistorico++;
						}
						vidaPlayer -= perdavida;
					}
					else {
						perdavida = (rand() % 4) + desviar;
						printf("\n=========================================");
						printf("\n          BOT ERROU!");
						printf("\n=========================================");
						printf("\n\nO bot perdeu %i de vida.", perdavida);
						printf("\n=========================================\n");
						if(totalHistorico < 20) {
							sprintf(historico[totalHistorico],
							        "O bot perdeu %i de vida", perdavida);
							totalHistorico++;
						}
						vidaBot -= perdavida;
					}
					printf("\nPressione ENTER para continuar...");
					getchar();
					getchar();
					system(LIMPAR_TELA);
				}
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
						perdavida = (rand() % 6) + danoPlayer1;
						vidaBot -= perdavida;

						printf("\n=========================================");
						printf("\n         ATAQUE ACERTOU!");
						printf("\n=========================================");
						printf("\n\nO bot perdeu %i de vida.", perdavida);
						printf("\n=========================================\n");
						if(totalHistorico < 20) {
							sprintf(historico[totalHistorico],
							        "O bot perdeu %i de vida", perdavida);
							totalHistorico++;
						}
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
						perdavida = (rand() % 6) + danoBot;

						printf("\n=========================================");
						printf("\n        VOCE FOI ACERTADO!");
						printf("\n=========================================");
						printf("\n\nVoce perdeu %i de vida.", perdavida);
						printf("\n=========================================\n");
						if(totalHistorico < 20) {
							sprintf(historico[totalHistorico],
							        "Jogador perdeu %i de vida", perdavida);
							totalHistorico++;
						}
						vidaPlayer -= perdavida;
					}

					printf("\nPressione ENTER para ir para a proxima rodada!");
					getchar();
					getchar();
					system(LIMPAR_TELA);
				}

				else if(forca == 2) {

					forca = rand() % 3;
					if(forca == 0) {
						perdavida = (rand() % 6) + danoPlayer;
						vidaBot -= perdavida;

						printf("\n=========================================");
						printf("\n        VOCE ACERTOU!");
						printf("\n=========================================");
						printf("\n\nO bot perdeu %i de vida.", perdavida);
						printf("\n=========================================\n");
						if(totalHistorico < 20) {
							sprintf(historico[totalHistorico],
							        "O bot perdeu %i de vida", perdavida);
							totalHistorico++;
						}
					}
					else {
						printf("\n=========================================");
						printf("\n           VOCE ERROU!");
						printf("\n=========================================\n");
					}

					botataque = rand() % 5;

					if(botataque == esquiva) {
						perdavida = (rand() % 6) + danoBot;

						printf("\n=========================================");
						printf("\n          O BOT ACERTOU!");
						printf("\n=========================================");
						printf("\n\nVoce perdeu %i de vida.", perdavida);
						printf("\n=========================================\n");
						if(totalHistorico < 20) {
							sprintf(historico[totalHistorico],
							        "Jogador perdeu %i de vida", perdavida);
							totalHistorico++;
						}
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
			else if(acao == 0) {
				printf("\n=========================================");
				printf("\n               SAINDO!");
				printf("\n=========================================\n");
				printf("\nPressione ENTER para continuar...");
				getchar();
				getchar();
				system(LIMPAR_TELA);
				break;
			}

			else if(acao == 4) {
				printf("\n=========================================\n");
				printf("            HISTORICO\n");
				printf("=========================================\n");

				if (totalHistorico <=0 ) {
					printf("Historico vazio.\n");
				}

				for(int i = 0; i < totalHistorico; i++) {
					printf("%i. %s\n", i + 1, historico[i]);
				}
				printf("\nPressione ENTER para continuar...");
				getchar();
				getchar();
				system(LIMPAR_TELA);
			}
			else if(acao == 5) {
				printf("OBJETIVO:Derrote o BOT reduzindo sua vida a 0.\n");

ACOES:
				printf("[1] DESVIAR: Escolha uma direcao. Se o BOT atacar o mesmo lado, voce recebe dano. Caso contrario, o BOT perde vida.\n");

				printf("[2] CURARRecupera 20 de vida, mas o BOT ainda pode atacar.\n");

				printf("[3] ATACARAtaque Fraco: mais chance de acerto,menos dano. Ataque Forte: menos chance de acerto,mais dano.\n");

				printf("[4]HISTORICO: Mostra os eventos da partida.\n");
				printf("VITORIA: Reduza a vida do BOT a 0.\n");

				printf("RANKING: Os melhores tempos sao salvos com base no menor numero de rodadas.\n");
				getchar();
				getchar();
				system(LIMPAR_TELA);
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

			if(vidaPlayer <= 0 && vidaBot <= 0) {
				system(LIMPAR_TELA);
				printf("\n\n");
				printf("#####################################\n");
				printf("#                                   #\n");
				printf("#              EMPATE              #\n");
				printf("#                                   #\n");
				printf("#####################################\n");
				break;
			}

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

				// adiciona no ranking
				if(totalRank[dif] < MAX_RANK) {

					strcpy(rankingNomes[dif][totalRank[dif]], nome);
					rankingRodadas[dif][totalRank[dif]] = rodadas;
					totalRank[dif]++;
				}
				else {
					int pior = 0;

					for(int i = 1; i < MAX_RANK; i++) {
						if(rankingRodadas[dif][i] > rankingRodadas[dif][pior]) {
							pior = i;
						}
					}
					if(rodadas < rankingRodadas[dif][pior]) {
						strcpy(rankingNomes[dif][pior], nome);
						rankingRodadas[dif][pior] = rodadas;
					}
				}
				for(int i = 0; i < totalRank[dif] - 1; i++) {

					for(int j = i + 1; j < totalRank[dif]; j++) {

						if(rankingRodadas[dif][j] < rankingRodadas[dif][i]) {

							int tempRodadas = rankingRodadas[dif][i];
							rankingRodadas[dif][i] = rankingRodadas[dif][j];
							rankingRodadas[dif][j] = tempRodadas;

							char tempNome[50];
							strcpy(tempNome, rankingNomes[dif][i]);
							strcpy(rankingNomes[dif][i], rankingNomes[dif][j]);
							strcpy(rankingNomes[dif][j], tempNome);
						}
					}
				}
				printf("\n=========================================\n");
				printf("               RANKING\n");
				printf("=========================================\n");


				for(int i = 0; i < totalRank[dif]; i++) {
					printf("%i. %s - %i rodadas\n",
					       i + 1,
					       rankingNomes[dif][i],
					       rankingRodadas[dif][i]);
				}
				break;
			}
		}
		printf("\nVoce deseja continuar(0 para sim, 1 para nao): \n");
		scanf("%i", &começo);
	}
	while(começo == 0);
}