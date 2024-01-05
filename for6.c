// escrever os números de 20 até 0 (decrescente)
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int c;
    
	for (c=20  ; c>=0  ; c--)
		    printf ("%d \t",c);
		    
	return 0;
}
