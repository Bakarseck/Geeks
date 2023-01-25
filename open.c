#include "library/lib.h"

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = "";

    fichier = fopen("test.txt", "r");

    if (fichier != NULL)
    {
        fputs("Je m'appelle Bakar", fichier); //écrire dans le fichier
        fgets(chaine, TAILLE_MAX, fichier); //On lit et on le stocke dans chaîne
        PrintString(chaine);
        fclose(fichier); // On ferme le fichier qui a été ouvert
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("No such File or directory");
    }

    return 0;
}