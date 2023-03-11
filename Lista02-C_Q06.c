#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    printf("|========================|\n");
    printf("|*       ELEICOES       *|\n");
    printf("|========================|\n");
    printf("|--->   Candidatos:   <--|\n");
    printf("|------------------------|\n");
    printf("|-->(5) - Paulo          |\n");
    printf("|-->(7) - Renata         |\n");
    printf("|========================|\n");

    int voto, votpaulo,votrenata,votbranco,votnulo;
    printf("\n");
    do{
        printf("Vote Aqui: ");
        scanf("%d",&voto);
        if(voto == 5){
            printf("Candidato votado: PAULO.\n");
            votpaulo = votpaulo + 1;
        } else if(voto == 7){
            printf("Candidato votado: RENATA.\n");
            votrenata = votrenata + 1;
        } else if (voto == 0){
            printf("Candidato votado: EM BRANCO.\n");
            votbranco = votbranco + 1;
        } else if(voto >= 1){
            printf("Candidato votado: NULO.\n");
            votnulo = votnulo + 1;
        }
    }while(voto > -1);

    printf("%d votos para PAULO.\n",votpaulo);
    printf("%d votos para RENATA.\n",votrenata);
    printf("%d votos EM BRANCO.\n",votbranco);
    printf("%d votos NULOS.\n",votnulo);
}