#include <stdio.h>
#include <stdlib.h>

int main(){
    int nDonnee;
    int nPositive;
    int nNegatif;
    int *base;
    int *positif;
    int *negatif;

    /* Partie A 
    printf("Entrez le nombre de donnee: \n");
    scanf("%d",&nDonnee);
    
    if(nDonnee > 0){
    base = (int*)malloc(nDonnee*sizeof(int));
    if(base == NULL){
        perror("Out of Memory\n");
        exit(EXIT_FAILURE);
    }
    }else{
        printf("le nombre de donnee est égale à 0 ou negatif");
        exit(EXIT_FAILURE);
    } */

   /* Partie B */
    printf("Entrez le nombre de donnee et entre 0 pour quitter: \n");
    scanf("%d",&nDonnee);

   while (nDonnee >= 0)
   {
      base = (int*)malloc(nDonnee*sizeof(int));
    if(base == NULL){
        perror("Out of Memory\n");
        exit(EXIT_FAILURE);
    }
   
     /* Fin Partie B */
   

    printf("Entrez les données\n");
    nNegatif = nPositive = 0;

    for(int i; i < nDonnee; i++){
        scanf("%d",&base[i]);
        if(base[i] >= 0){
            nPositive++;
        }else{
            nNegatif++;
        }
    }

    negatif = malloc(nNegatif*sizeof(int));
    positif = malloc(nPositive*sizeof(int));

    if(positif == NULL || negatif == NULL){
        perror("Out of Memory\n");
        exit(EXIT_FAILURE);
    }

    nNegatif = nPositive = 0;
    for(int i; i < nDonnee;i++){
        if(base[i] >= 0){
            positif[nPositive] = base[i];
            nPositive++;
        }else{
            negatif[nNegatif] = base[i];
            nNegatif++;
        }
    }

    printf("Résultats: \n");

    printf("        Tableau de valeur positives: ");
    for(int i; i < nPositive;i++){
        printf("%d ",positif[i]);
        printf("\n");
    };

    printf("        Tableau de valeur negatifs: ");
     for(int i; i < nNegatif;i++){
         printf("%d ",negatif[i]);
         printf("\n");
    }

    free(base);
    free(positif);
    free(negatif);


    /* Partie B */
    printf("Entrez le nombre de donnee et entre 0 pour quitter: \n");
    scanf("%d",&nDonnee);
    /* Fin Partie B */
   }
}