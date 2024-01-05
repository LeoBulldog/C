/*
	Digite o peso e a altura de uma pessoa, calcule o IMC da pessoa, mostre o resultado na tela
*/
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Portuguese");
	float P, H, IMC;
	printf("Digite o seu PESO: ");
	scanf("%f",&P);
	printf("Digite a sua ALTURA: ");
	scanf("%f",&H);
	IMC = P / (H*H);
	printf("\nSeu IMC é %.2f",IMC);
	printf("\n\n\n\n\n");
}
