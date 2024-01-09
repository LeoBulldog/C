/*
Ler 2 números inteiros.
ler a operação desejada (char) + - * /
Mostrar na tela o resultado.
-------------------------------------
Número?
operador  + - * /
Número?
Resultado =
--------------------------------------
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	char op;
	int n1,n2;
	printf ("Digite um numero: ");
	scanf ("%d",&n1);	
	printf("Qual operação vc quer fazer + - * / >>>> ");
	scanf("%s",&op);
	printf ("Digite um numero: ");
	scanf ("%d",&n2);	
	
	switch(op)  // int ou char
	{
		case '+': printf ("O resultado é %d",n1+n2); break;
		case '-': printf ("O resultado é %d",n1-n2); break;
	    case '*': printf ("O resultado é %d",n1*n2); break;
	    case '/': if (n2==0) printf ("Não podemos dividir por zero");
		          else printf ("O resultado é %d",n1/n2); 
				  break;
	    default: printf ("Operação invalida");
	}	
	getch();  // getchar();
	return 0;
}
