#include <stdio.h>
#include <locale.h>
int main()   //main = principal
{
	setlocale(LC_ALL,"Portuguese");
    int A, B;
	printf ("Digite o 1� n�mero:");
	scanf ("%d",&A);	
    printf ("Digite o 2� n�mero:");
	scanf ("%d",&B);
	
	if (A == B)	printf ("Os n�meros s�o IGUAIS");
	else			printf ("Os n�meros s�o DIFERENTES");
	 	
    return 0;
}
