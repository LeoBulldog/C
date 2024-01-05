//Leia um número inteiro e mostre o número lido na tela
#include <stdio.h>
#include <locale.h>   //para acentuação
int main()
{
  setlocale(LC_ALL,"Portuguese");
  int num;
  
  {
  	
  		printf ("Digite um número: ");
  		scanf ("%d",&num);               // usar & apenas no scanf
  }
  printf ("\nO número digitado é %d",num);
  
  printf ("\n\n\n\n\n");
  return 0;
}
