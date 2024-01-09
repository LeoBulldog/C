#include <stdio.h>
#include <locale.h>
int main()   //main = principal
{
	setlocale(LC_ALL,"Portuguese");
  	int num;
  	
  	printf ("Digite um número: ");
  	scanf ("%d",&num);
  	
  	if (num >= 0) 	printf ("POSITIVO");
  	else			printf ("NEGATIVO");
		
	return 0;
}
