#include <stdio.h>
#include <locale.h>
int main () //main = principal
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf ("Digite um n�mero:");
	scanf ("%d",&num);
	printf ("\nSEU ANTECESSOR �: %d",num-1);
	return 0;
}
