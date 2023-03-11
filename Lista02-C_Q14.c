#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int numero, limite, quantidade = 0;

    printf("Digite o VALOR INICIAL: ");
    scanf("%d",&numero);
    printf("Digite o VALOR LIMITE: ");
    scanf("%d",&limite);

    if(numero < limite){
    for(int i = numero; i <= limite; i++){
        if(i % 3 == 0){
            quantidade += 1;
        }
    }
    }else if(numero > limite){
        for(int i = numero; i >= limite; i--){
        if(i % 3 == 0){
            quantidade += 1;
        }
    }
    }else if(numero == limite){
        printf("Solicitacao Invalida!");
    }

    printf("NUMEROS DIVISIVEIS POR 3: %d.\n",quantidade);
}