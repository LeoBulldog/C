#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	float alt;
	printf ("Digite sua altura: ");
	scanf ("%f",&alt);
	printf ("Digite seu sexo F/M: ");
	scanf ("%s",&sexo);
	switch (sexo)    // int ou char
	{
		case 'F': 
		case 'f': printf ("Seu peso ideal é %.2f", 62.1 * alt - 44.7 ); break;		
		case 'm': 
		case 'M': printf ("Seu peso ideal é %.2f", 72.7 * alt - 58); break;
		default: printf ("Sexo inválido");
    }
	getch();
	return 0;	
}
