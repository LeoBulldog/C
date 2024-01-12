#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float PTS;
	
	printf("Digite o total de pontos obtidos na prova: ");
	scanf ("%f",&PTS);
	
	if (( PTS > 0 ) && ( PTS <= 30))			printf ("REGULAR");
	else if (( PTS >= 31 ) && ( PTS <= 60))		printf ("BOM");
	else if (( PTS >= 61 ) && ( PTS <= 90))		printf ("MUITO BOM");
	else if (( PTS >= 91 ) && ( PTS <= 100))	printf ("ÓTIMO");
	else										printf ("PONTUAÇÃO INVÁLIDA");
	
	return 0;
}
