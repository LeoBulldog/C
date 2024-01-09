/*6) Leia 2 notas de um aluno e apresente a média do aluno na tela.
entrada --->  processamento ---> saída
A   B		    (A+B)/2    		mostrar o resultado na tela	*/
#include <stdio.h>
#include <locale.h> 
void main()
{
  setlocale(LC_ALL,"Portuguese");     // ALL acentuação e monetária
  float A, B, med;
  printf ("Digite a 1ª nota: ");
  scanf ("%f",&A); 
  printf ("Digite a 2ª nota: ");
  scanf ("%f",&B); 
  med = (A + B)/2;
  printf ("\nSua média é %.2f", med);
  
  printf ("\n\n\n\n\n");  
}
