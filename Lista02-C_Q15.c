#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int base = 3, potencia;

    for(int i = 0; i <= 7; i++){
        potencia = pow(base,i);
        printf("%d ^ %d = %d\n",base,i,potencia);
    }
}