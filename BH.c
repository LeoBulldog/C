#include <stdio.h>
#include <locale.h> 
void main()
{
  setlocale(LC_ALL,"Portuguese");          // ALL acentua��o e monet�ria
  float B, H;
  printf("Digite a medida da BASE: ");
  scanf("%f",&B);
  printf("Digite a medida da ALTURA: ");
  scanf("%f",&H);
  printf("\nA �rea da sala retangular � %.2f", B*H);
  printf("\n\n\n\n\n");  
}
