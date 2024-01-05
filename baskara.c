#include <stdio.h>
#include <locale.h>
#include <math.h>  // sqrt
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float a, b, c, delta;
	printf ("Digite o valor de a: ");
	scanf ("%f",&a);
	printf ("Digite o valor de b: ");
	scanf ("%f",&b);
	printf ("Digite o valor de c: ");
	scanf ("%f",&c);	
	delta = (b*b)-(4*a*c);  //delta = b² - 4ac
	printf ("\nO valor de delta é %.2f", delta);
	
	if (delta < 0)  	printf ("\nNão existe raiz real");
	else if (delta ==0)	printf ("\nUma raiz = %.2f",-b/(2*a));
	     else {
	     	      printf ("\nRaiz 1 = %.2f",(-b+sqrt(delta))/(2*a));
	     	      printf ("\nRaiz 2 = %.2f",(-b-sqrt(delta))/(2*a));
		      }
	
	return 0;
}
