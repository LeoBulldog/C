// escrever os números inteiros de 0 até 50 na tela. 
// passo 5... só os múltiplos de 5
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int c;
	
	for (c=1 ; c<=50  ; c++)
	{
	   if (c % 5 == 0)   printf ("%d \t",c);
    }
	return 0;
}

