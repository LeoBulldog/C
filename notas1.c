/*6) Leia 2 notas de um aluno e apresente a m�dia do aluno na tela.
entrada --->  processamento ---> sa�da
A   B		    (A+B)/2    		mostrar o resultado na tela	*/
#include <stdio.h>
#include <locale.h> 
void main()
{
  setlocale(LC_ALL,"Portuguese");     // ALL acentua��o e monet�ria
  float A, B, med;
  printf ("Digite a 1� nota: ");
  scanf ("%f",&A); 
  printf ("Digite a 2� nota: ");
  scanf ("%f",&B); 
  med = (A + B)/2;
  printf ("\nSua m�dia � %.2f", med);
  
  printf ("\n\n\n\n\n");  
}
