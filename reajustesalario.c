#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, reajuste1, reajuste2, reajuste3;
	
	printf ("Digite o seu salário: ");
	scanf  ("%f",&salario);
	reajuste1 = salario + ( salario * 0.5 ) ;
	reajuste2 = salario + ( salario * 0.2 ) ;
	reajuste3 = salario + ( salario * 0.1);
	
	if ((salario >= 0) && (salario <= 2000))		printf ("O salário reajustado é: %.2f", reajuste1);
	else if ((salario > 2000) && (salario < 5000))	printf ("O salário reajustado é: %.2f", reajuste2);
	else											printf ("O salário reajustado é: %.2f", reajuste3);
	return 0;
}

