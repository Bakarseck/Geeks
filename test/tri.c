#include<stdio.h>

void Tri(int tableau[], int taille) {
    int j = 0;
    while ( j < taille) {
        for (int i = 1; i < taille; i++)
        {
            if (tableau[i-1] > tableau[i] )
            {
                int temporaire ;
                temporaire = tableau[i-1];
                tableau[i-1] = tableau[i];
                tableau[i] = temporaire;
                j = 0;
            } else {
                j++;
            }
            
        }
        
    }    
}

void main() {

    int t[10];

    for (int i = 0; i < 10; i++)
    {
        t[i] = 10 - i ;
    }

    printf("Le tableau avant tri : \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", t[i]);
    }

    printf("\n");

    Tri(t, 10);

    printf("Le tableau apres tri : \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", t[i]);
    }
    
}


