#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

float parse_float(char*);



/*
 * Complete the 'converteTemperatura' function below.
 *
 * The function is expected to return a FLOAT.
 * The function accepts following parameters:
 *  1. FLOAT temperatura
 *  2. STRING escalaOrigem
 *  3. STRING escalaDesejada
 */

float converteTemperatura(float temperatura, char escalaOrigem, char escalaDesejada, float conversao) {
    char celsius, kelvin, fahrenheit;
    float conversao, c, k, f;
    if(escalaOrigem == celsius && escalaDesejada == kelvin){
        kc = c + 273.15;
    }
    if(escalaOrigem == kelvin && escalaDesejada == celsius){
        ck = k - 273.15;  
    }
    if(escalaOrigem == celsius && escalaDesejada == fahrenheit){
        fc = (c * 1.8) + 32;        
    }
    if(escalaOrigem == fahrenheit && escalaDesejada == celsius){
        cf = (f - 32) / 1.8;  
    }
    if(escalaOrigem == kelvin && escalaDesejada == fahrenheit){
        kf = kc - f; 
    }
    if(escalaOrigem == fahrenheit && escalaDesejada == kelvin){
        fk = kc + f;
    }
    
    
    
    c = celsius;
    kc = conversao;
    fc = conversao;
    k = kelvin;
    ck = conversao;
    kf = conversao;
    f = conversao;
    fk = conversao;
    cf = conversao;
    
    
        
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    float temperatura;
    char escalaOrigem, escalaDesejada;
    printf("Digite a temperatura: ");
    scanf("%f",&temperatura);
    
    printf("Digite a escala de origem:\n ");
    scanf("%c",&escalaOrigem);
    
    printf("Digite a escala desejada: ");
    scanf("%c",&escalaDesejada);
    
    printf("O valor da conversão é: ");
    scanf("%f",&conversao);
    
}
