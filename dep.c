#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL,"Portuguese");
	float dep, taxa,rend;
	
	printf ("Qual o valor do dep�sito: ");
	scanf ("%f",&dep);
	printf ("Qual o valor da taxa: ");
	scanf ("%f",&taxa);		
	rend = dep*taxa/100;	
	printf ("\nO rendimento � %.2f", rend);
	
	printf ("\nO valor total � %.2f",dep + rend);
	if (rend > 3000)		printf("\nHaver� incid�ncia de IR no saque");
	else				printf("\nN�o haver� incid�ncia de IR no saque");
	return 0;
}
