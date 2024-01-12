/*
Ler valor de uma compra  ==> float
Ler forma de pagamento ==> int
   1 >> a vista com 10% de desconto
   2 >> cartão de crédito com 5% de desconto
   3 >> em 2 vezes sem juros
   4 >> em 3 vezes com 10% de juros
   outra >> opção inválida
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
    printf ("\n2 >> cartão de crédito com 5%% de desconto");
    printf ("\n3 >> em 2 vezes sem juros");
    printf ("\n4 >> em 3 vezes com 10%% de juros");
	printf ("\n\nDigite a forma de pagamento 1/2/3/4: ");
	scanf ("%d",&op);
	
	switch(op)  // int ou char
	{
		case 1: printf ("Vc pagará a vista %.2f reais",V*0.90); break;
		case 2: printf ("Vc pagará cartão crédito %.2f reais",V*0.95); break;
	    case 3: printf ("Vc pagará 2 parcelas de %.2f reais",V/2); break;
	    case 4: printf ("Vc pagará 3 parcelas de %.2f reais",V*1.10/3); break;
	    default: printf ("Opção inválida");
	}
	
	getch();  // getchar();
	return 0;
}
