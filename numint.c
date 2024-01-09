#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float num;
	printf ("Digite um número: ");
	scanf ("%f",&num);
	if (num > 0)	printf ("\nPOSITIVO");
	else if (num < 0) printf ("\nNEGATIVO");
	     else if (num == 0)     printf ("\nNULO");
	printf("\n\nFIM DO PROGRAMA");
	return 0;
}
