/*	Ler duas notas. Mostrar a m�dia.
	Informar se o aluno est� aprovado, reprovado ou de recupera��o
	M >= 7 ---> aluno aprovado
	M < 5  ---> aluno reprovado
	entre 5 e 7 ---> Recupera��o
*/

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, M;
	
	printf ("Digite a primeira nota: ");
	scanf ("%f",&n1);
	printf ("Digite a segunda nota: ");
	scanf ("%f",&n2);
	
	M = (n1+n2)/2;
	printf ("\nSua m�dia � %.2f", M);
	if ( M >= 7) printf ("\nAprovado");
	else if ( M < 5) printf ("\nReprovado");
	     else 		 printf ("\nRecupera��o");
	
	
	
	return 0;
}
