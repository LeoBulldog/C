#include <stdio.h>
#include <locale.h>
int main()   //main = principal
{
	setlocale(LC_ALL,"Portuguese");
    int A, B;
	printf ("Digite o 1º número:");
	scanf ("%d",&A);	
    printf ("Digite o 2º número:");
	scanf ("%d",&B);
	
	if (A == B)	printf ("Os números são IGUAIS");
	else			printf ("Os números são DIFERENTES");
	 	
    return 0;
}
