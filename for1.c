// escrever UNICID 20 vezes na tela. Utilizar o "for"
// for precisa de um contador inteiro

// cont = cont + 1      é a mesma coisa      cont++

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int cont;	
	
	for (cont=1  ;  cont<=20  ;  cont++)
  		printf ("\n UNICID");	
        
	return 0;
}


