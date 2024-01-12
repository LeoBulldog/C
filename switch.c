/*
Ler valor de uma compra  ==> float
Ler forma de pagamento ==> int
   1 >> a vista com 10% de desconto
   2 >> cart�o de cr�dito com 5% de desconto
   3 >> em 2 vezes sem juros
   4 >> em 3 vezes com 10% de juros
   outra >> op��o inv�lida
*/ 
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float V;
	int op;
	printf ("Digite o valor da compra: ");
	scanf ("%f",&V);
	printf ("\nMENU");
	printf ("\n1 >> a vista com 10%% de desconto");
    printf ("\n2 >> cart�o de cr�dito com 5%% de desconto");
    printf ("\n3 >> em 2 vezes sem juros");
    printf ("\n4 >> em 3 vezes com 10%% de juros");
	printf ("\n\nDigite a forma de pagamento 1/2/3/4: ");
	scanf ("%d",&op);
	
	switch(op)  // int ou char
	{
		case 1: printf ("Vc pagar� a vista %.2f reais",V*0.90); break;
		case 2: printf ("Vc pagar� cart�o cr�dito %.2f reais",V*0.95); break;
	    case 3: printf ("Vc pagar� 2 parcelas de %.2f reais",V/2); break;
	    case 4: printf ("Vc pagar� 3 parcelas de %.2f reais",V*1.10/3); break;
	    default: printf ("Op��o inv�lida");
	}
	
	getch();  // getchar();
	return 0;
}
