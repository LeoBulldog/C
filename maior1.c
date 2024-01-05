#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int n1, n2;
	printf ("Digite um número: ");
	scanf ("%d", &n1);
	printf ("Digite outro número: ");
	scanf ("%d", &n2);
	if (n1>n2)	printf ("\nO maior número é : %d", n1);
	else if (n2>n1) printf ("\nO maior número é : %d", n2);
		 else if (n1==n2) printf ("\nOs números são equivalentes");
	
	return 0;
}
