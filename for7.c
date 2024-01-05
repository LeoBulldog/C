/* o usário vai digitar um número
   apresentar a metade a metade do número lido
   
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
	      printf ("\n\nDigite o %dº número:",c);
	      scanf ("%f",&Num);
	      printf ("A metade do número é %.2f",Num/2);
    }
	return 0;
}
