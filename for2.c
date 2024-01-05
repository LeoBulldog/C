// escrever os números inteiros de 1 até 50 na tela
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int c;
	
	for (c=1 ; c<=50 ; c++)
		printf ("%d \t",c);
		sleep(1);
		
	return 0;
}
