#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int r, n, t, cont=0;
	char c = 's';
	printf ("                                                  ESTRELAS ");
	printf ("\n\nO objetivo � adivinhar um n�mero N (entre 32 e 128) gerado pelo computador.");
	printf ("\n\nA cada entrada o computador emitir� uma mensagem composta por 'estrelas'.");
	printf ("\n\nSendo que a diferen�a poder� ser tanto para cima quanto para baixo.");
	printf ("\n\n\nJ� tenho o n�mero em mente. Agora � sua vez de adivinhar.");
	
	srand(time(NULL));
	r = (rand() % 97) + 32;
	while (c == 's' || c == 'S'){
		printf ("\n\nEntre com um valor entre 32 e 128: ");
		scanf ("%d",&n);
		while (n < 32 && n > 128) {
			printf ("\nOp��o inv�lida!");
			printf ("\nEscolha um n�mero entre 32 e 128: ");
			scanf ("%d",&n);
		}
		cont++;
		t = n - r;
		if (t <= -64 || t >= 64){
			printf ("*");
		} else if (t <= -32 || t >= 32){
			printf ("**");
		} else if (t <= -16 || t >= 16){
			printf ("***");
		} else if (t <= -8 || t >= 8){
			printf ("****");
		} else if (t <= -4 || t >= 4){
			printf ("*****");
		} else if (t <= -2 || t >= 2){
			printf ("******");
		} else if (t <= -1 || t >= 1){
			printf ("*******");
		} else {
			printf ("\n\nVoc� adivinhou o n�mero correto em %d tentativas", cont);
			c = 'n';
		}
	}
	return 0;
}

