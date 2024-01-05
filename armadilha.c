#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int lim_inf, lim_sup, num_pc, contador=1;
	srand(time(NULL));
	num_pc = (rand() % 100) + 1; // gerar número de 0 até 100
	while (contador >= 1) 
			{
				printf ("\n  Essa será sua %dª tentativa \n ", contador );
				printf ("\n  Digite o limite inferior: ");
				scanf ("%d",&lim_inf);
				
				printf ("\n  Digite o limite superior: ");
				scanf ("%d",&lim_sup);
		        contador++;
				
				if ((lim_inf == num_pc) && (lim_sup == num_pc))
					{
					printf("\n  Você levou %d tentativas para acertar \n", contador-1);
					break;
					}
					
					else if  ((lim_inf > num_pc) || (lim_sup < num_pc))
						printf("\n  Meu número não está entre os seus \n");
							
							else if ((lim_inf <= num_pc) && (lim_sup >= num_pc))
							 	printf("\n  Meu número está entre os seus \n");
			}	

	return 0;
	
}


