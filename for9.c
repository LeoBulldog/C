/* mostrar os DEZ primeiros números da série de Fibonacci
	1	1 	2	3	5	8	13	21	34	55
*/


#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int c, soma, ant=1, aux= 1;
	
	printf ("%d \t %d \t",ant, aux);
	for (c=3 ; c<=10 ; c++)
	{
		soma = ant + aux;
		printf ("%d \t", soma);
		aux = ant;
		ant = soma;
	}
	return 0;
	
}
