//  3) Exercício 11 da lista 1.
//     +   -   *    / resultado da divisão    % resto da divisão
			  
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int V, m100, m50, m10,m5, m1;
	
	printf ("Digite um número: ");
	scanf ("%d",&V);     //379
	
	m100 = V /100;
	V = V%100;        //79
	
	m50 = V /50;
	V = V%50;        //29
	
	m10 = V /10;
	V = V%10;		//9
	
	m5 = V/5;
	m1 = V%5;    //4
	
	printf ("\n%d moedas de 100",m100);
	printf ("\n%d moedas de 50" ,m50);
	printf ("\n%d moedas de 10" ,m10);
	printf ("\n%d moedas de 5" ,m5);
	printf ("\n%d moedas de 1" ,m1);
	
	return 0;
}
