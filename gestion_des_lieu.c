
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int gold = 0;
int PV = 100;
typedef struct Chapitre{
    char desc[120];
    int index;
    int gold;
    int PV;
    int id[3];
}chapitre;

void travel(chapitre * vartravel){
    printf("Description : %s\n", (*vartravel).desc);
    printf("Gain (ou perte) d'or : %d\n", (*vartravel).gold);
    if((gold + (*vartravel).gold)>=0){
    gold += (*vartravel).gold;
    }
    printf("Gain (ou perte) de PV : %d\n", (*vartravel).PV);
    if((PV +(*vartravel).PV) >= 0 && (PV +(*vartravel).PV)<100){
    PV += (*vartravel).PV;
    }
    printf("Possible destinations : %d %d %d\n", (*vartravel).id[0],(*vartravel).id[1],(*vartravel).id[2]);
}


int main(){
    int destination = 0;

    chapitre chapitre1 = {"Vous arrivez dans la plaine des loups,vous pouvez y passer la nuit mais faites attention.", 1, 5, 15, {7, 6, 2} };
    chapitre chapitre2 = {"Vous sentez la terre trembler ,vous etes entrer dans la tanière d'un des huits Chien-Loup il fonce sur vous. ", 2, 20, 5, {1, 2, 1} };
    chapitre chapitre3 = {"Vous arrivez devant un immense roc ,avec autour de lui six personnes dissimulées dans la brume.", 5, 0, -7, {7, 5, 1} };
    chapitre chapitre4 = {"Vous arrivez dans la magnifique contrée de Britania vous pouvez vous y reposer librement.", 4, 50, -5, {1, 6, 2} };
    chapitre chapitre5 = {"Vous trouvez le cadabre en putrefaction d'un aventurier malchanceux,vous le depoulliez et prennez son or.", 3, -10, 10, {3, 6, 2} };
 
    printf("Bonjour, bienvenue aventurier, votre nom ?\n");
    char nom[20] = { 0 }, 
     prenom[20] = { 0 };
     scanf( "%19s", nom );
      printf( "So now, I'll call you %s !\n", nom );

    printf("Vous partez maintenant en chasse\n");

    while(PV>=0){
        scanf("%d", &destination);

        switch (destination){

            case 1 :
                travel(&chapitre1);
                printf("Vous avez %d PV\nAnd %d pièce d'or\n", PV, gold);

            break;

            case 2 :
                travel(&chapitre2);
                printf("Vous avez %d PV\nAnd %d pièce d'or\n", PV, gold);
            break;

            case 3 :
                travel(&chapitre3);
                printf("Vous avez %d PV\nAnd %d pièce d'or\n", PV, gold);
            break;

            case 4 :
                travel(&chapitre4);
                printf("Vous avez %d PV\nAnd %d pièce d'or\n", PV, gold);
            break;

            case 5 :
                travel(&chapitre5);
                printf("Vous avez %d PV\nAnd %d pièce d'or\n", PV, gold);
            break;

        }
    };
    return 0;
}
