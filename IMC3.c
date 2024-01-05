#include <stdio.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "Portuguese");
float P, H, IMC;
printf("Digite o seu peso: ");
scanf("%f",&P);
printf("Digite a sua altura: ");
scanf("%f",&H);
IMC = P / (H * H);
printf("O seu IMC é: %.2f \n",IMC );
if (IMC <= 18.5){
printf("Magro");
}
else if(IMC <=25.0){
printf("Normal");
}
else if(IMC<=30.0){
printf("Sobrepeso");
}
else{
printf("Obeso");
}
return 0;
}
