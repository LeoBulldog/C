/*	Ler 2 n�meros int e mostrar a soma 
	Quer continuar <s/n>??
	Validar as op��es <s S n N>
	*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int A, B;
	char op='s';	//para entrar no while a primeira vez
	
	while ((op=='s')||(op=='S'))
	{
			printf ("\n\n\n");
			printf ("Digite um n�mero: ");
			scanf ("%d",&A);
			printf ("Digite outro n�mero: ");
			scanf ("%d",&B);
			printf ("A soma � %d",A+B);
			printf ("\nQuer continuar <S/N>: ");
			scanf ("%s",&op);
	}
	return 0;
}
