/* o us�rio vai digitar um n�mero
   apresentar a metade a metade do n�mero lido
   
   Fazer esse procedimento DEZ vezes
*/   
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int c;
	float Num;
	
	for (c=1 ; c<=10 ; c++)
	{
	      printf ("\n\nDigite o %d� n�mero:",c);
	      scanf ("%f",&Num);
	      printf ("A metade do n�mero � %.2f",Num/2);
    }
	return 0;
}
