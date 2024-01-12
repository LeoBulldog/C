#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, gastos;
	
	printf ("Digite o seu salário: ");
	scanf  ("%f",&salario);
	printf ("Digite o total gasto no mês: ");
	scanf  ("%f",&gastos);
	
	if ( gastos < salario )				printf("Gastos dentro do orçamento");
	if ( gastos > salario )				printf("Orçamento estourado");
	
	return 0;
	
}

