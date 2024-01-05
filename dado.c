#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(void)
{
 setlocale(LC_ALL,"Portuguese");
 int min = 1, max, jog, comp, life=3; // O menor n�mero
 char op = '1'; // para entrar no while a primeira vez
 printf ("                                                 DADO ");
 printf ("\n\n  Ser� definido pelo jogador a quantidade de faces do dado.");
 printf ("\n\n  Se o n�mero tirado pelo jogador for maior que o do computador ele ganha uma vida.");
 printf ("\n\n  Se o computador ganhar o jogador perde 1 de suas 3 vidas iniciais.");
 srand(time(NULL)); // apenas UMA vez no in�cio do programa
 

 while (op!='0') {

 printf ("\n\n\n");
 printf ("\n\n  Voc� possui %d vidas.", life);
 
 printf ("\n\n\n  Quantas faces o dado virtual possui? ");
 scanf("%d", &max); // O maior n�mero
 
 printf ("\n  >>>JOGADOR<<<");
 printf("\n  A face sorteada foi: %d\n\n", (rand () % (max-min+1) + min) ); //gera n�meros entre min e max

 printf ("\n  >>>COMPUTADOR<<<");
 printf("\n  A face sorteada foi: %d\n\n", (rand () % (max-min+1) + min) ); //gera n�meros entre min e max

 if (jog == comp) {
 			printf ("\nEmpate! Ningu�m ganhou");
		} else if (jog > comp){
			printf ("\n  Jogador ganhou: >>>>>> Jogador ganhou 1 vida <<<<<<<");
			life++;
		} else {
			printf ("\n  Computador ganhou: >>>>>> Jogador perdeu 1 vida <<<<<<<");
			life--;
		}

 printf("\n\n  Pressione 0 <para sair>: ");
 scanf ("%s",&op);
 }

 return 0;
}
