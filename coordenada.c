#include <stdio.h>
#include <locale.h>
int  main () 
{
	setlocale(LC_ALL, "Portuguese");
	float x, y;
	printf("Digite o valor da coordenada x: ");
	scanf ("%f",&x);
	printf("Digite o valor da coordenada y: ");
	scanf ("%f",&y);
	if (( x == 0 ) && ( y == 0 ))	printf("A coordenada est� na ORIGEM");
	if (( x == 0 ) && ( y != 0 ))	printf("A coordenada est� no EIXO Y");
	if (( x != 0 ) && ( y == 0 ))	printf("A coordenada est� no EIXO X");
	if (( x > 0) && ( y > 0 ))	    printf("A coordenada est� no primeiro quadrante");
	if (( x < 0) && ( y > 0 ))	    printf("A coordenada est� no segundo quadrante");
	if (( x < 0) && ( y < 0 ))   	printf("A coordenada est� no terceiro quadrante");
	if (( x > 0) && ( y < 0 ))		printf("A coordenada est� no quarto quadrante");
	
	return 0;
}
