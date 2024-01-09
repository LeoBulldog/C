/*  Ler 2 notas e mostrar a média
    Quer continuar <s/n>??
    Validar as notas. Só aceitar notas de 0 até dez
*/
#include <stdio.h>
#include <locale.h>
int main()
{   
	setlocale(LC_ALL,"Portuguese");
	float A, B, med;
	char op='s';   // para entrar no while a 1ª vez	
	while ((op=='s')||(op=='S')) 
	{
		    printf ("\n\n\n");	
					
			printf ("Digite a 1ª nota <0 até 10>: ");
			scanf ("%f",&A);			
			while ((A<0)||(A>10))
			{
				printf ("Nota Inválida! Digite a 1ª nota <0 até 10>: ");
			    scanf ("%f",&A);				
			}
			
			printf ("\n---------------------\n");
			printf ("Digite a 2ª nota <0 até 10>: ");
			scanf ("%f",&B);
			while ((B<0)||(B>10))
			{
			   printf ("Nota Inválida! Digite a 2ª nota <0 até 10>: ");
			   scanf ("%f",&B);
		    }
		    
			med = (A+B)/2;
			if (med >=5)  printf ("\nAPROVADO com média %.2f", med);
			else          printf ("\nREPROVADO com média %.2f", med);
			printf ("\nQuer continuar <S/N>? ");
			scanf ("%s",&op);
    }			
	return 0;
}
