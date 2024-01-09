#include <stdio.h>
#include <locale.h>
int main () //main = principal
{
	setlocale(LC_ALL, "Portuguese");
	int num,r;
	printf("Digite um número: ");
	scanf ("%d",&num);
	r = num % 2;
	if (r == 0) printf("\nO NÚMERO É PAR");
	else	    printf("\nO NÚMERO É ÍMPAR");
	return 0;
}
