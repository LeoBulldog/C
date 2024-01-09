#include <stdio.h>
#include <locale.h>
int main () //main = principal
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf ("Digite um número: ");
	scanf ("%d",&n1);
	printf ("Digite outro número: ");
	scanf ("%d",&n2);
	
	if (n2 < n1) printf("%d %d",n2,n1);
	else		 printf("%d %d",n1,n2);
	return 0;
}
