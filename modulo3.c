/*
vari�veis:
n�o pode ter espa�o 
n�o pode come�ar com n�mero
n�o pode palavra reservada
n�o pode usar s�mbolos + - * / # & % @
---------------------------------------------
>  maior
<  menor     
>= maior ou igual   
<= menor ou igual
== igual   
!= diferente
--------------------------------------------------
Ler 2 notas e mostrar a m�dia.
Informar se o aluno est� aprovado ou reprovado.
M�dia para ser aprovado dever� ser >= 6

Entrada ---->   Processamento            -----> Sa�da
ler nota1		med = (nota1+nota2)/2    		mostrar a m�dia
Ler nota2
*/
#include <stdio.h>
#include <locale.h>
int main()   //main = principal
{
	setlocale(LC_ALL,"Portuguese");
  	float n1, n2, med;  	
    printf ("Digite a 1� nota: ");
    scanf ("%f",&n1);
    printf ("Digite a 2� nota: ");
    scanf ("%f",&n2);
    med = (n1 + n2)/2;
  	printf ("\nA media do aluno eh %.2f",med);
    if (med >= 6) printf ("\nAPROVADO");
    else		  printf ("\nREPROVADO");	  
		
	return 0;
}
