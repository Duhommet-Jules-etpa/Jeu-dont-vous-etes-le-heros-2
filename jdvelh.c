#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
int choixJ=0;


printf("Bonjour noble voyageur ou souhaitez vous vous dirigez? \n");
printf("(1) Voulez vous vous diriger vers Britania ? \n");
printf("(2) Voulez vous vous diriger vers l'entre du Chien Loup Martiniqué ? \n");
           scanf("%d",&choixJ);


 if (choixJ==1){
            printf("Vous vous diriger vers Britania  \n");
          }

 else if(choixJ==2){
    printf("Vous vous diriger vers l'entre du Chien Loup Martiniqué  \n");

 }

return 0;
}