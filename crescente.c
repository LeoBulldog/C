#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	
	printf ("Digite o primeiro número: ");
	scanf  ("%d",&n1);
	printf ("Digite o segundo número: ");
	scanf  ("%d",&n2);
	
	if ( n1 == n2 )			printf ("Os números são iguais");
	if ( n1 > n2 )			printf ("Os números são diferentes e a sua ordem crescente é a seguinte: %d , %d", n2, n1 );
	if ( n1 < n2 )			printf ( "Os números são diferentes e a sua ordem crescente é a seguinte: %d , %d", n1, n2 );
	
	return 0;
	
}

