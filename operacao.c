/*
Ler 2 n�meros inteiros.
ler a opera��o desejada (char) + - * /
Mostrar na tela o resultado.
-------------------------------------
N�mero?
operador  + - * /
N�mero?
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
	printf("Qual opera��o vc quer fazer + - * / >>>> ");
	scanf("%s",&op);
	printf ("Digite um numero: ");
	scanf ("%d",&n2);	
	
	switch(op)  // int ou char
	{
		case '+': printf ("O resultado � %d",n1+n2); break;
		case '-': printf ("O resultado � %d",n1-n2); break;
	    case '*': printf ("O resultado � %d",n1*n2); break;
	    case '/': if (n2==0) printf ("N�o podemos dividir por zero");
		          else printf ("O resultado � %d",n1/n2); 
				  break;
	    default: printf ("Opera��o invalida");
	}	
	getch();  // getchar();
	return 0;
}
