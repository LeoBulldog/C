/*
1) Ler os 3 lados de um tri�ngulo.
Verificar se existe tri�ngulo: cada lado<soma dos outros 2 lados
Classificar em equil�tero, is�sceles e escaleno.
------------------------------------------------------------
e   --> &&  --> TODAS as condi��es precisam ser verdadeiras
ou  --> ||  --> apenas 1 condi��o precisa ser verdadeira
-------------------------------------------------------------
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float A, B, C;
	printf ("Digite o 1� lado do tri�ngulo: ");
	scanf ("%f",&A);
	printf ("Digite o 2� lado do tri�ngulo: ");
	scanf ("%f",&B);
	printf ("Digite o 3� lado do tri�ngulo: ");
	scanf ("%f",&C);
	
    if ((A<B+C) && (B<A+C) && (C<A+B)) 
	{
	    printf ("Existe Tri�ngulo");
	    if ((A==B)&&(B==C)&&(A==C))              printf ("\nEQUILATERO");
	    else  if ((A==B)||(B==C)||(A==C))        printf ("\nISOSCELES");
	          else                               printf ("\nESCALENO");      
    }
	else   printf ("N�o existe Tri�ngulo");	
	return 0;
}

