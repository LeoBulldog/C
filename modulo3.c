/*
variáveis:
não pode ter espaço 
não pode começar com número
não pode palavra reservada
não pode usar símbolos + - * / # & % @
---------------------------------------------
>  maior
<  menor     
>= maior ou igual   
<= menor ou igual
== igual   
!= diferente
--------------------------------------------------
Ler 2 notas e mostrar a média.
Informar se o aluno está aprovado ou reprovado.
Média para ser aprovado deverá ser >= 6

Entrada ---->   Processamento            -----> Saída
ler nota1		med = (nota1+nota2)/2    		mostrar a média
Ler nota2
*/
#include <stdio.h>
#include <locale.h>
int main()   //main = principal
{
	setlocale(LC_ALL,"Portuguese");
  	float n1, n2, med;  	
    printf ("Digite a 1ª nota: ");
    scanf ("%f",&n1);
    printf ("Digite a 2ª nota: ");
    scanf ("%f",&n2);
    med = (n1 + n2)/2;
  	printf ("\nA media do aluno eh %.2f",med);
    if (med >= 6) printf ("\nAPROVADO");
    else		  printf ("\nREPROVADO");	  
		
	return 0;
}
