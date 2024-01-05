// computador --> gerar um número aleatorio de zero até quinze
// nós --> vamos digitar 1 número
// verificar aleatorio == numero
// QUENTE --> se a diferença entre magico e num for = 1
// MORNO --> se a diferença entre magico e num for = 2
// FRIO --> se a diferença entre magico e num for > 2

#include <stdio.h>
#include <locale.h>
#include <time.h>        // srand(time(NULL));
#include <stdlib.h>      //  srand e rand
int main()
{   
	setlocale(LC_ALL,"Portuguese");
	int num, magico, diferenca, vida = 5;
	
	srand(time(NULL));
	magico = rand() % 16;   // resto da divisão por 16 => 0 até 15
    //printf ("%d",magico);  // apagar essa linha para vender o JOGO
	
	while (vida > 0)
	{
    	printf ("\n\n\nPress one number <0 until 15>: ");
	    scanf ("%d",&num);
	
	    if (magico == num)  { 
		                      printf ("Congratulation!! You are very good");
		                      printf ("\nWINNER");
		                      break;
		                     }
	    else     {
		              printf ("you lose... Try again");	
		              diferenca = magico - num;
		              if (diferenca < 0)  diferenca = diferenca * -1;
		              
		              if (diferenca ==1)     printf ("\nIt´s NEAR");
		              else if (diferenca==2) printf ("\nIt's WARM"); 
		                   else              printf ("\nIt's COLD");		              
		         }
	     
	    vida--;        //  vida = vida - 1;   
		if (vida ==0) printf ("\n\nGAME OVER.....");
    }  
	return 0;
}
