#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float P, H, IMC;
	printf ("Digite seu peso : ");
	scanf ("%f",&P);
	printf ("Digite sua altura : ");
	scanf ("%f",&H);
	IMC = P/(H*H);
	if (IMC > 18,5) printf ("\nSeu IMC é %.2f\n,Abaixo do peso",IMC);
	else if (IMC >= 18,6 && IMC <= 24,9) printf ("\nSeu IMC é %.2f\n, Peso ideal", IMC);
	printf ("\n\n");   	
  	  	  	
  	system ("pause");
	return 0;
}
