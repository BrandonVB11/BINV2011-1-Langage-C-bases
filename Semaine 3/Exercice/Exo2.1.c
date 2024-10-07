#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int main(){

    double tab[SIZE];
    int cpt = 0;
    double moyenne;
    double note;

    printf("Entrez les notes des étudiants, Ctrl-D pour teminer: \n");
    while(scanf("%lf", &note) != EOF){
    tab[cpt] = note;
    moyenne += note;
    cpt++;
    }
    moyenne = moyenne/cpt;
    printf("La moyenne des notes est: %lf\n",moyenne);
    printf("Ecarts des etudiants par rapport à la moyenne\n");
    for(int i = 0; i < cpt; i++){
        double ecart = tab[i] - moyenne;
        printf("Etudiant %d : %lf - %lf = %lf \n",i,tab[i],moyenne,ecart);
    }
}