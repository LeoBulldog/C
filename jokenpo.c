#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int item,escolha;
	char resp='S';
	printf ("                                                 ATEN��O!");
	printf ("\n  O papel ganha da pedra porque a embrulha.");
	printf ("\n\n  A tesoura ganha do papel porque o corta.");
	printf ("\n\n  A pedra ganha da tesoura porque a quebra.");

	srand(time(NULL));
	item = rand() % 3; // gerar n�mero de 0 at� 2
	printf ("\n\n\n  Escolha pedra (0), papel (1) ou tesoura (2): ");
	scanf ("%d",&escolha);
	if (( item == 0 ) && ( escolha == 0 ))	printf("\n\n  Computador escolheu pedra\n\n  Jogador escolheu pedra\n\n  Empate! Ningu�m ganhou");
	if (( item == 0 ) && ( escolha == 1 ))  printf("\n\n  Computador escolheu pedra\n\n  Jogador escolheu papel\n\n  Jogador ganhou");
	if (( item == 0 ) && ( escolha == 2 ))	printf("\n\n  Computador escolheu pedra\n\n  Jogador escolheu tesoura\n\n  Computador ganhou");
	
	if (( item == 1 ) && ( escolha == 0 ))	printf("\n\n  Computador escolheu papel\n\n  Jogador escolheu pedra\n\n  Computador ganhou");
	if (( item == 1 ) && ( escolha == 1 ))	printf("\n\n  Computador escolheu papel\n\n  Jogador escolheu papel\n\n  Empate! Ningu�m ganhou");
	if (( item == 1 ) && ( escolha == 2 ))	printf("\n\n  Computador escolheu papel\n\n  Jogador escolheu tesoura\n\n  Jogador ganhou");
	
	if (( item == 2 ) && ( escolha == 0 ))	printf("\n\n  Computador escolheu tesoura\n\n  Jogador escolheu pedra\n\n  Jogador ganhou");
	if (( item == 2 ) && ( escolha == 1 ))	printf("\n\n  Computador escolheu tesoura\n\n  Jogador escolheu papel\n\n  Computador ganhou");
	if (( item == 2 ) && ( escolha == 2 ))	printf("\n\n  Computador escolheu tesoura\n\n  Jogador escolheu tesoura\n\n  Empate! Ningu�m ganhou");
	if ((escolha != 0) && (escolha != 1) && (escolha != 2)) printf("\n\n  Op��o Inv�lida!");
	
	
	printf("\n\n");
	printf("\n  Vamos jogar novamente? [S/N] ");
	scanf ("%s",&resp);
	
	if (resp == 'S' || resp == 's') printf("\n\n  Recomece o jogo");
	if (resp == 'N' || resp == 'n') printf("\n\n  Encerre o jogo");
	return 0;
}
