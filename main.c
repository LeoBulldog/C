#include <stdio.h>
int main()
{
  //system ("clear");
  int teste, Gui, status;  
  float nota,A1, A2;
  teste = -55;
  status = 9;
  Gui = 17;
  nota = 9.56;
  A1 = 3.5;
  A2 = 5.5;
  printf ("\n\nbom dia people!!!");
  printf ("\n\n O conte�do da vari�vel teste � %i ", teste);  //pode usar %d ou %i
  printf ("\n\n O conte�do %i � da vari�vel teste ", teste);  //pode usar %d ou %i
  printf ("\n\nO Gui entrou na Universidade com %i anos",Gui); //pode usar %d ou %i
  printf ("\n\nO Gui entrou na Universidade com %i anos e com conceito %i",Gui,status);
  printf ("\n\nA nota do Guilherme foi %f",nota);
  printf ("\n\nA nota do Guilherme foi %.2f",nota);
  printf ("\n\nA nota do Guilherme foi %.1f",nota);
  printf ("\n\nA nota do Guilherme foi %.0f",nota);
  printf ("\n\nO Gui entrou na Universidade com %i anos, com conceito %i e nota %.2f",Gui,status,nota);
  printf ("\n\nAs duas notas s�o %.2f e %.2f. A nota final � %.2f",A1, A2,A1+A2);
  printf ("\n\n");
  return 0;

}
