#include <stdio.h>
#include <stdlib.h>

/*
    sizeof(<donnee>)               : retourne la taille en octets d'une donnee


    malloc(<taille_en_octets>)     : allouer dynaamiquement une zone memoire
    free(<donnee_allouee>)         : libere l'espace memoire allouee

    calloc(<donnee>, <taille_en_octets>) : alloue et initialise tout à 0
    realloc(<donnee>, <nouvelle_taille>) : realloue un espace mémoire
*/

int main() {
    int nombre_joueurs = 2;
    int *liste_joueurs ;
    int i;

    liste_joueurs = malloc(sizeof(int) * nombre_joueurs);

    if (liste_joueurs == NULL)
        exit(1);

    for(i =0; i < nombre_joueurs; i++) {
        printf("Joueur %d -> numero %d \n", i + 1, i + 3);
        liste_joueurs[i] = i * 3;
    }

    for (int i = 0; i < nombre_joueurs; i++)
    {
        printf("[%d]", liste_joueurs[i]);
    }

    printf("\n------------------------------------------\n");


    nombre_joueurs = 5 ;

    liste_joueurs = realloc(liste_joueurs, nombre_joueurs * sizeof(int));

    if (liste_joueurs == NULL)
        exit(1);

    for(i =0; i < nombre_joueurs; i++) {
        printf("Joueur %d -> numero %d \n", i + 1, i + 3);
        liste_joueurs[i] = i * 3;
    }

    for (int i = 0; i < nombre_joueurs; i++)
    {
        printf("[%d]", liste_joueurs[i]);
    }

    printf("\n");

    free(liste_joueurs) ;
    
    return 0;
    
}
