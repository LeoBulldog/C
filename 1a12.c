#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	
	printf ("Digite o número do mês: ");
	scanf ("%d", &num);
	
	if ( num == 1 )					printf ("O mês correspondente é janeiro");
	else if ( num == 2 )			printf ("O mês correspondente é fevereiro");
	else if ( num == 3 )			printf ("O mês correspondente é março");
	else if ( num == 4 )		    printf ("O mês correspondente é abril");
	else if ( num == 5 )		    printf ("O mês correspondente é maio");
	else if ( num == 6 )		    printf ("O mês correspondente é junho");
	else if ( num == 7 )		    printf ("O mês correspondente é julho");
	else if ( num == 8 )		    printf ("O mês correspondente é agosto");
	else if ( num == 9 )		    printf ("O mês correspondente é setembro");
	else if ( num == 10 )			printf ("O mês correspondente é outubro");
	else if ( num == 11 )			printf ("O mês correspondente é novembro");
	else if ( num == 12 )			printf ("O mês correspondente é dezembro");
	else	                		printf ("ERRO, o número não pertence ao intervalo indicado");
	
	getch ();
	return 0;
}
