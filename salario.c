#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, gastos;
	
	printf ("Digite o seu sal�rio: ");
	scanf  ("%f",&salario);
	printf ("Digite o total gasto no m�s: ");
	scanf  ("%f",&gastos);
	
	if ( gastos < salario )				printf("Gastos dentro do or�amento");
	if ( gastos > salario )				printf("Or�amento estourado");
	
	return 0;
	
}

