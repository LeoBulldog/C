/*
16
1  3  5  7   9  11  13  15

16 - 1 = 15
15 - 3 = 12
12 - 5 = 7
7  - 7 = 0    raiz quadrada é exata = 4

----------------------------------------------------
25

25 - 1 = 24
24 - 3 = 21
21 - 5 = 16
16 - 7 = 9
9 - 9  = 0  raiz quadrada exata = 5

-----------------------------------------------------

4

4 - 1 = 3
3 - 3 = 0   raiz quadrada exata = 2

----------------------------------------------------
5
5 - 1 = 4
4 - 3 = 1
1 - 5 = -4   raiz quadrada NÃO é exata (aproximada)= 2
-------------------------------------------------
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int Num, impar=1, qtd_vezes=0;
	
	printf ("Digite um número: ");
	scanf ("%d",&Num);
	
	while (Num > 0)
	{
		Num = Num - impar;
		impar = impar +2 ;     // 1 3 5 7 9 11
		qtd_vezes++;
	}
	
	if (Num ==0) printf ("\nRaiz quadrada EXATA = %d",qtd_vezes);
	else  printf ("\nRaiz quadrada APROXIMADA = %d",qtd_vezes-1);
	
	return 0;
}
