/*  Ler 2 notas e mostrar a m�dia
    Quer continuar <s/n>??
    Validar as notas. S� aceitar notas de 0 at� dez
*/
#include <stdio.h>
#include <locale.h>
int main()
{   
	setlocale(LC_ALL,"Portuguese");
	float A, B, med;
	char op='s';   // para entrar no while a 1� vez	
	while ((op=='s')||(op=='S')) 
	{
		    printf ("\n\n\n");	
					
			printf ("Digite a 1� nota <0 at� 10>: ");
			scanf ("%f",&A);			
			while ((A<0)||(A>10))
			{
				printf ("Nota Inv�lida! Digite a 1� nota <0 at� 10>: ");
			    scanf ("%f",&A);				
			}
			
			printf ("\n---------------------\n");
			printf ("Digite a 2� nota <0 at� 10>: ");
			scanf ("%f",&B);
			while ((B<0)||(B>10))
			{
			   printf ("Nota Inv�lida! Digite a 2� nota <0 at� 10>: ");
			   scanf ("%f",&B);
		    }
		    
			med = (A+B)/2;
			if (med >=5)  printf ("\nAPROVADO com m�dia %.2f", med);
			else          printf ("\nREPROVADO com m�dia %.2f", med);
			printf ("\nQuer continuar <S/N>? ");
			scanf ("%s",&op);
    }			
	return 0;
}
