#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int valor_inicial, valor_limite;
    float media_aritmetica, quantidade, soma;

    printf("VALOR INICIAL: ");
    scanf("%d",&valor_inicial);

    printf("VALOR LIMITE: ");
    scanf("%d",&valor_limite);

    for(int i = valor_inicial; i <= valor_limite; i++){
        soma += i;
        quantidade += 1;
    }
    printf("Soma = %g\n",soma);
    printf("Quantidade = %g\n",quantidade);
    media_aritmetica = (soma / quantidade);
    printf("Media Aritmetica do Intervalo = %g\n",media_aritmetica);
}