#include <stdio.h>
#include <locale.h>
int main () //main = principal
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf ("Digite sua idade: ");
	scanf ("%d",&idade);
	if ( idade >= 18 ) printf("\nVOCÊ É UM ADULTO");
	else 			   printf("\nVOCÊ NÃO É UM ADULTO");
	return 0;
}
