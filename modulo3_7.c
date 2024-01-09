#include <stdio.h>
#include <locale.h>
int main () //main = principal
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf ("Digite um número:");
	scanf ("%d",&num);
	printf ("\nSEU ANTECESSOR É: %d",num-1);
	return 0;
}
