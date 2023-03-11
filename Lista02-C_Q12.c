#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

    printf("|========================|\n");
    printf("|*       TABUADA        *|\n");
    printf("|========================|\n");
    printf("|-->(+) - ADICAO         |\n");
    printf("|-->(-) - SUBTRACAO      |\n");
    printf("|-->(*) - MULTIPLICACAO  |\n");
    printf("|-->(/) - DIVISAO        |\n");
    printf("|========================|\n");

    int numero;
    float calculo;
    char tabuada;
    printf("\n");
    printf("Qual TABUADA:(+ - * /) ");
    scanf(" %c",&tabuada);

    printf("VALOR NUMERICO para a TABUADA: ");
    scanf("%d",&numero);
    
    if(tabuada == '+'){
        for(int i = 0; i <= 10; i++){
            calculo = numero + i;
            printf("%d + %d = %g\n",numero,i,calculo);
        }
    }else if(tabuada == '-'){
        for(int i = 0; i <= 10; i++){
            calculo = numero - i;
            printf("%d - %d = %g\n",numero,i,calculo);
        }
    }else if(tabuada == '*'){
        for(int i = 0; i <= 10; i++){
            calculo = numero * i;
            printf("%d * %d = %g\n",numero,i,calculo);
        }
    }else if(tabuada == '/'){
        for(int i = 1; i <= 10; i++){
            calculo = numero / i;
            printf("%d / %d = %.1f\n",numero,i,calculo);
        }
    }

}