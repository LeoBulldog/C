#include <stdio.h>
#include <locale.h> 
void main()
{
  setlocale(LC_ALL,"Portuguese");          // ALL acentua��o e monet�ria
  int n1, n2, soma;
  printf ("Digite um n�mero:");
  scanf ("%d",&n1);
  printf ("Digite outro n�mero:");
  scanf ("%d",&n2);
  printf ("\nA soma � %d", n1+n2);  
  printf ("\nA subtra��o � %d", n1-n2);  
  printf ("\nA multiplica��o � %d", n1*n2);  
  printf ("\nA divi�o � %d", n1/n2);  
  printf ("\n\n\n\n\n");  
}
