#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

    printf("|===================================|\n");
    printf("|* PRE-INCREMENTO X POS INCREMENTO *|\n");
    printf("|===================================|\n");
    printf("|-->(A) - Pre-Incremento            |\n");
    printf("|-->(B) - Pos-Incremento            |\n");
    printf("|===================================|\n");

    printf("\n");

    int numero,tabuada;
    char preffer;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    printf("Prefere Pre ou Pos Incrememto?(A/B) ");
    scanf(" %c",&preffer);

    printf("Vamos calcular a tabuada de ADICAO!\n");

    if(preffer == 'A'){
        for(int i = 0; i <= 10; ++i){
            tabuada = numero + i;
            printf("%d + %d = %d\n",numero,i,tabuada);
        }
        printf("\n");
        printf("O Pre-Incremento retorna imediatamente o valor incrementado, logo a sequencia deve comecar com: 5 + 1.");
    }else if(preffer == 'B'){
        for(int i = 0; i <= 10; i++){
            tabuada = numero + i;
            printf("%d + %d = %d\n",numero,i,tabuada);
        }
        printf("\n");
        printf("O Pos-Incremento retorna o valor incrementado so na proxima execucao do laco, logo a sequencia comeca com: 5 + 0.");
    }
}