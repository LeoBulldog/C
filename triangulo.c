/*
1) Ler os 3 lados de um triângulo.
Verificar se existe triângulo: cada lado<soma dos outros 2 lados
Classificar em equilátero, isósceles e escaleno.
------------------------------------------------------------
e   --> &&  --> TODAS as condições precisam ser verdadeiras
ou  --> ||  --> apenas 1 condição precisa ser verdadeira
-------------------------------------------------------------
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float A, B, C;
	printf ("Digite o 1º lado do triângulo: ");
	scanf ("%f",&A);
	printf ("Digite o 2º lado do triângulo: ");
	scanf ("%f",&B);
	printf ("Digite o 3º lado do triângulo: ");
	scanf ("%f",&C);
	
    if ((A<B+C) && (B<A+C) && (C<A+B)) 
	{
	    printf ("Existe Triângulo");
	    if ((A==B)&&(B==C)&&(A==C))              printf ("\nEQUILATERO");
	    else  if ((A==B)||(B==C)||(A==C))        printf ("\nISOSCELES");
	          else                               printf ("\nESCALENO");      
    }
	else   printf ("Não existe Triângulo");	
	return 0;
}

