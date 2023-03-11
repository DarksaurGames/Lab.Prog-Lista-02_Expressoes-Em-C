#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int numero = 15, limite = 90, quadrado;

    for(int i = numero; i <= limite; i++){
        if(i % 4 == 0){
            quadrado = i * i;
            printf("%d\n",quadrado);
        }
    }
}