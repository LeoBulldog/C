#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	
	printf ("Digite o n�mero do m�s: ");
	scanf ("%d", &num);
	
	if ( num == 1 )					printf ("O m�s correspondente � janeiro");
	else if ( num == 2 )			printf ("O m�s correspondente � fevereiro");
	else if ( num == 3 )			printf ("O m�s correspondente � mar�o");
	else if ( num == 4 )		    printf ("O m�s correspondente � abril");
	else if ( num == 5 )		    printf ("O m�s correspondente � maio");
	else if ( num == 6 )		    printf ("O m�s correspondente � junho");
	else if ( num == 7 )		    printf ("O m�s correspondente � julho");
	else if ( num == 8 )		    printf ("O m�s correspondente � agosto");
	else if ( num == 9 )		    printf ("O m�s correspondente � setembro");
	else if ( num == 10 )			printf ("O m�s correspondente � outubro");
	else if ( num == 11 )			printf ("O m�s correspondente � novembro");
	else if ( num == 12 )			printf ("O m�s correspondente � dezembro");
	else	                		printf ("ERRO, o n�mero n�o pertence ao intervalo indicado");
	
	getch ();
	return 0;
}
