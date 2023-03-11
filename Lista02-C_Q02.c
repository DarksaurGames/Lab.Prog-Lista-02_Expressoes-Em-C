#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int dia_semana;

    while(dia_semana != 0){
        printf("Digite um numero: ");
        scanf("%d",&dia_semana);

        if(dia_semana == 1){
            printf("Dia 1 = DOMINGO.\n");
        }else if(dia_semana == 2){
            printf("Dia 2 = SEGUNDA-FEIRA.\n");
        }else if(dia_semana == 3){
            printf("Dia 3 = TERCA-FEIRA.\n");
        }else if(dia_semana == 4){
            printf("Dia 4 = QUARTA-FEIRA.\n");
        }else if(dia_semana == 5){
            printf("Dia 5 = QUINTA-FEIRA.\n");
        }else if(dia_semana == 6){
            printf("Dia 6 = SEXTA-FEIRA.\n");
        }else if(dia_semana == 7){
            printf("Dia 7 = SABADO.\n");
        }else if(dia_semana == 0){
            printf("Programa encerrado!\n");
        }else{
            printf("Numero de dia invalido!\n");
        }

    }
}