//Leia um número decimal e mostre o número lido na tela
#include <stdio.h>
#include <locale.h>   //para acentuação
int main()
{
  setlocale(LC_ALL,"Portuguese"); // ALL acentuação e monetária
  float num;
  
  printf ("Digite um número: ");
  scanf ("%f",&num);                       // usar & apenas no scanf
  printf ("\nO número digitado é %f",num);
  printf ("\nO número digitado é %.2f",num);
  
  printf ("\n\n\n\n\n");
  return 0;
}
