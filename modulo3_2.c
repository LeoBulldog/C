#include <stdio.h>
#include <locale.h>
int main ()	//main = principal
{
	setlocale(LC_ALL,"Portuguese");
	int n1, n2;
	printf ("Digite um n�mero:");
	scanf ("%d",&n1);
	printf ("Digite outro n�mero:");
	scanf ("%d",&n2);
	
	if (n1 > n2) printf("maior � %d",n1);
	else		 printf("maior � %d",n2);	 
	return 0;
}
