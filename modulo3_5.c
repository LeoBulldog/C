#include <stdio.h>
#include <locale.h>
int main () //main = principal
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf ("Digite sua idade: ");
	scanf ("%d",&idade);
	if ( idade >= 18 ) printf("\nVOC� � UM ADULTO");
	else 			   printf("\nVOC� N�O � UM ADULTO");
	return 0;
}
