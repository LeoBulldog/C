#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int n1, n2;
	printf ("Digite um n�mero: ");
	scanf ("%d", &n1);
	printf ("Digite outro n�mero: ");
	scanf ("%d", &n2);
	if (n1>n2)	printf ("\nO maior n�mero � : %d", n1);
	else if (n2>n1) printf ("\nO maior n�mero � : %d", n2);
		 else if (n1==n2) printf ("\nOs n�meros s�o equivalentes");
	
	return 0;
}
