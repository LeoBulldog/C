#include <stdio.h>
#include <locale.h>
int main ()	//main = principal
{
	setlocale(LC_ALL,"Portuguese");
	int n1, n2;
	printf ("Digite um número:");
	scanf ("%d",&n1);
	printf ("Digite outro número:");
	scanf ("%d",&n2);
	
	if (n1 > n2) printf("maior é %d",n1);
	else		 printf("maior é %d",n2);	 
	return 0;
}
