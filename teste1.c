#include <stdio.h>
#include <locale.h> 
void main()
{
  setlocale(LC_ALL,"Portuguese");          // ALL acentuação e monetária
  int n1, n2, soma;
  printf ("Digite um número:");
  scanf ("%d",&n1);
  printf ("Digite outro número:");
  scanf ("%d",&n2);
  printf ("\nA soma é %d", n1+n2);  
  printf ("\nA subtração é %d", n1-n2);  
  printf ("\nA multiplicação é %d", n1*n2);  
  printf ("\nA divião é %d", n1/n2);  
  printf ("\n\n\n\n\n");  
}
