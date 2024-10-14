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

        // Fill pos and neg arrays        
      int* ptrP = positif;
      int* ptrN = negatif;
      for (int* ptr = base; ptr-base<nDonnee; ptr++) {
         if (*ptr>=0) {
            *ptrP = *ptr;
            ptrP++;
         } else {
            *ptrN = *ptr;
            ptrN++;
         }
      }

      // Print arrays
      printf("Resultat : \n");
      for (int* ptrP = positif; ptrP-positif<nPositive; ptrP++)
         printf("%d ", *ptrP);
      printf("\n");

      for (int* ptrN = negatif; ptrN-negatif<nNegatif; ptrN++)
         printf("%d ", *ptrN);
      printf("\n");

    free(base);
    free(positif);
    free(negatif);


    /* Partie B */
    printf("Entrez le nombre de donnee et entre 0 pour quitter: \n");
    scanf("%d",&nDonnee);
    /* Fin Partie B */
   }
}