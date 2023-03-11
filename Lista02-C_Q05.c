#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int numero[5];
    int Maior,menor;

    for(int a = 0; a < 5; a++){
        printf("numero[%d] = ",a);
        scanf("%d",&numero[a]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(numero[i] > numero[j]){
                Maior = numero[i];
            }else if(numero[i] < numero[j]){
                menor = numero[i];
            }
        }
    }

    printf("Maior = %d\n",Maior);
    printf("menor = %d\n",menor);
}