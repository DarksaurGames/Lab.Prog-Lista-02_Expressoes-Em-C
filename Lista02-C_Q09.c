#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int numero, fibo1 = 0, fibo2 = 1, fibo3;

    printf("Limite da Sequencia: ");
    scanf("%d",&numero);

    if(numero < 0){
        printf("Numero Invalido!\n");
    }

    while(fibo2 < numero){
        fibo3 = fibo2 + fibo1;
        printf("  %d",fibo3);
        fibo1 = fibo2;
        fibo2 = fibo3;
    }
}