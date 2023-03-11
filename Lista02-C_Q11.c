#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int numero, limite, quadrado;

    printf("Digite o VALOR INICIAL: ");
    scanf("%d",&numero);
    printf("Digite o VALOR LIMITE: ");
    scanf("%d",&limite);

    if(numero < limite){
    for(int i = numero; i <= limite; i++){
        if(i % 4 == 0){
            quadrado = i * i;
            printf("%d\n",quadrado);
        }
    }
    }else if(numero > limite){
        for(int i = numero; i >= limite; i--){
        if(i % 4 == 0){
            quadrado = i * i;
            printf("%d\n",quadrado);
        }
    }
    }else if(numero == limite){
        printf("Solicitacao Invalida!");
    }
}