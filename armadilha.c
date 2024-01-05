#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int lim_inf, lim_sup, num_pc, contador=1;
	srand(time(NULL));
	num_pc = (rand() % 100) + 1; // gerar n�mero de 0 at� 100
	while (contador >= 1) 
			{
				printf ("\n  Essa ser� sua %d� tentativa \n ", contador );
				printf ("\n  Digite o limite inferior: ");
				scanf ("%d",&lim_inf);
				
				printf ("\n  Digite o limite superior: ");
				scanf ("%d",&lim_sup);
		        contador++;
				
				if ((lim_inf == num_pc) && (lim_sup == num_pc))
					{
					printf("\n  Voc� levou %d tentativas para acertar \n", contador-1);
					break;
					}
					
					else if  ((lim_inf > num_pc) || (lim_sup < num_pc))
						printf("\n  Meu n�mero n�o est� entre os seus \n");
							
							else if ((lim_inf <= num_pc) && (lim_sup >= num_pc))
							 	printf("\n  Meu n�mero est� entre os seus \n");
			}	

	return 0;
	
}


