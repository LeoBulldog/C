// pedir para o usu�rio digitar um n�mero inteiro
// mostrar os n�meros inteiros de 0 at� n� lido
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int Num=-8;  // para entrar a primeira vez no while
	int c;
	
	while (Num <0)
	{
	    printf ("Digite um n�mero positivo ou nulo: ");
	    scanf ("%d",&Num); 
    }
    
	for (c=0  ;  c<=Num ; c++)
	                printf ("%d\t",c);
	
	return 0;
}
