#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float n1, n2, n3, M, REC;
	
	printf ("Digite a primeira nota: ");
	scanf ("%f",&n1);
	printf ("Digite a segunda nota: ");
	scanf ("%f",&n2);
	printf ("Digite a terceira nota: ");
	scanf ("%f",&n3);
	M = (n1+n2+n3)/3;
	printf ("Sua nota é: %.2f ", M);
	if(M>=7)	printf ("\nAPROVADO");
	else {
		 printf ("\nDigite a nota da RECUPERAÇÃO : ");
		 scanf ("%f",&REC);
		 if (REC>=5)	printf ("APROVADO NA RECUPERAÇÃO");
		 else			printf ("REPROVADO");
		}
	return 0;
}
