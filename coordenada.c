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
	if (( x == 0 ) && ( y == 0 ))	printf("A coordenada está na ORIGEM");
	if (( x == 0 ) && ( y != 0 ))	printf("A coordenada está no EIXO Y");
	if (( x != 0 ) && ( y == 0 ))	printf("A coordenada está no EIXO X");
	if (( x > 0) && ( y > 0 ))	    printf("A coordenada está no primeiro quadrante");
	if (( x < 0) && ( y > 0 ))	    printf("A coordenada está no segundo quadrante");
	if (( x < 0) && ( y < 0 ))   	printf("A coordenada está no terceiro quadrante");
	if (( x > 0) && ( y < 0 ))		printf("A coordenada está no quarto quadrante");
	
	return 0;
}
