// escrever os números inteiros PARES de 0 até 100 na tela. 
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int c;
	char letra;	
	//   inicial   critério     passo (incremento)
	for (c=0     ; c<=50     ; c++)
	{
	  printf ("%d \n",c);
	  letra = getch();      
	          // getch espera a digitação de 1 tecla, mas escreve na tela
	  if ((letra =="M") || (letra =='m')) c= c + 10;
    }	    
	return 0;
}
