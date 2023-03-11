#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    float numero1,numero2,divisao;
    char desejo;

    printf("Iniciar a divisao? (S/N) ");
    scanf(" %c",&desejo);

    while(desejo == 'S'){
        printf("VALOR 1: ");
        scanf("%f",&numero1);
        printf("VALOR 2: ");
        scanf("%f",&numero2);
        divisao = numero1 / numero2;
        printf("DIVISAO: %.1f / %.1f = %.1f\n",numero1,numero2,divisao);
        if(numero2 == 0){
            printf("Valor Invalido. Tente novamente!\n");
        }
        printf("Iniciar a divisao? (S/N) ");
        scanf(" %c",&desejo);
    }

    /*do{
        printf("VALOR 1: ");
        scanf("%f",&numero1);
        printf("VALOR 2: ");
        scanf("%f",&numero2);
        divisao = numero1 / numero2;
        printf("DIVISAO: %.1f / %.1f = %.1f\n",numero1,numero2,divisao);
        if(numero2 == 0){
            printf("Valor Invalido. Tente novamente!");
            break;
        }
    }while(numero2 != 0);*/

}