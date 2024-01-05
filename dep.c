#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL,"Portuguese");
	float dep, taxa,rend;
	
	printf ("Qual o valor do depósito: ");
	scanf ("%f",&dep);
	printf ("Qual o valor da taxa: ");
	scanf ("%f",&taxa);		
	rend = dep*taxa/100;	
	printf ("\nO rendimento é %.2f", rend);
	
	printf ("\nO valor total é %.2f",dep + rend);
	if (rend > 3000)		printf("\nHaverá incidência de IR no saque");
	else				printf("\nNão haverá incidência de IR no saque");
	return 0;
}
