//Leia um n�mero decimal e mostre o n�mero lido na tela
#include <stdio.h>
#include <locale.h>   //para acentua��o
int main()
{
  setlocale(LC_ALL,"Portuguese"); // ALL acentua��o e monet�ria
  float num;
  
  printf ("Digite um n�mero: ");
  scanf ("%f",&num);                       // usar & apenas no scanf
  printf ("\nO n�mero digitado � %f",num);
  printf ("\nO n�mero digitado � %.2f",num);
  
  printf ("\n\n\n\n\n");
  return 0;
}
