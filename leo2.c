#include <stdio.h>
#include <locale.h>
int main()
{	
	setlocale(LC_ALL,"Portuguese");  // troquei ponto pela vírgula
	float p, a, imc;
	printf ("Digite seu peso = ");
	scanf ("%f",&p);
	printf ("Digite sua altura = ");
	scanf ("%f",&a);
	imc = p/(a*a);
	printf ("O imc é %.2f",imc);	
	if (imc < 20)			printf ("\nMAGRO");
	else if (imc < 25)		printf ("\nNORMAL");
	     else  if (imc <30)	printf ("\nGORDINHO");
	           else			printf ("\nOBESO");		
	return 0;
}
