//Leia um n�mero inteiro e mostre o n�mero lido na tela
#include <stdio.h>
#include <locale.h>   //para acentua��o
int main()
{
  setlocale(LC_ALL,"Portuguese");
  int num;
  
  {
  	
  		printf ("Digite um n�mero: ");
  		scanf ("%d",&num);               // usar & apenas no scanf
  }
  printf ("\nO n�mero digitado � %d",num);
  
  printf ("\n\n\n\n\n");
  return 0;
}
