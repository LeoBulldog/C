#include <stdio.h>
#include <locale.h> 
void main()
{
  setlocale(LC_ALL,"Portuguese");          // ALL acentuação e monetária
  float B, H;
  printf("Digite a medida da BASE: ");
  scanf("%f",&B);
  printf("Digite a medida da ALTURA: ");
  scanf("%f",&H);
  printf("\nA área da sala retangular é %.2f", B*H);
  printf("\n\n\n\n\n");  
}
