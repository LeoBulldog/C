#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	
	printf ("Digite o primeiro n�mero: ");
	scanf  ("%d",&n1);
	printf ("Digite o segundo n�mero: ");
	scanf  ("%d",&n2);
	
	if ( n1 == n2 )			printf ("Os n�meros s�o iguais");
	if ( n1 > n2 )			printf ("Os n�meros s�o diferentes e a sua ordem crescente � a seguinte: %d , %d", n2, n1 );
	if ( n1 < n2 )			printf ( "Os n�meros s�o diferentes e a sua ordem crescente � a seguinte: %d , %d", n1, n2 );
	
	return 0;
	
}

