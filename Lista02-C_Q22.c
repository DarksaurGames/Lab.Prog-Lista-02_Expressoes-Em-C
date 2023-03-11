#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int numero[4], setes = 0;

    printf("Digite um numero: ");

    for(int i = 0; i < strlen(numero);i++){
        scanf("%d",&numero[i]);
        printf("%d",numero[i]);
        if(numero[i] == 7){
            setes += 1;
        }
    }

    /*for(int u = 0; u < strlen(numero);u++){
        if(numero[u] == 7){
            setes += 1;
        }
    }*/

    printf("\nExistem %d algarismos 7 no valor digitado.",setes);
}