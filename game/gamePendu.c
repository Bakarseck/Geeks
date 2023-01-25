#include "../library/lib.h"
#include "../library/gamePendu.h"

int main(int numberOfArguments, char** arguments)
{
    char lettre = 0; // Stocke la lettre proposée par l'utilisateur (retour du scanf)
    char motSecret[] = "ROUGE"; // C'est le mot à trouver
    int nombreLettres = tailleMot(motSecret);
    int *lettreTrouvee = NULL;
    int *lettreTrouvee = NULL;
    int coupsRestants = 10; // Compteur de coups restants (0 = mort)
    
    return 0;
}

// taiile mot : int ; int tailleMot(char motSecret[])
// initTableau : void ; void initTableau(int* lettreTrouvee, int taille)
// gagne : int ; int gagne(int *lettreTrouvee, int nombreLettres)
// lireCaractère : char ; char lireCaractere()
// rechercheLettre : int ; int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee)