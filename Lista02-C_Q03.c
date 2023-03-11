#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int fatorial,calculo = 1;

    printf("Calcular o FATORIAL de: ");
    scanf("%d",&fatorial);

    for( ; fatorial >= 1; --fatorial){
        calculo *= fatorial;
         
    }

    printf("FATORIAL: %d",calculo);
}