#include <stdio.h>
#include <locale.h>
int main () //main = principal
{
	setlocale(LC_ALL, "Portuguese");
	int num,r;
	printf("Digite um n�mero: ");
	scanf ("%d",&num);
	r = num % 2;
	if (r == 0) printf("\nO N�MERO � PAR");
	else	    printf("\nO N�MERO � �MPAR");
	return 0;
}
