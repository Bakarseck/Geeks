#include <stdio.h>
#include <stdlib.h>

/*
    fopen(<fichier>, <mode_ouverture>) : r (lecture seule, doit exister)
                                         w (écriture seule)
                                         a (ajout fin fichier)
                                         r+ (lecture/écriture, doit exister)
                                         w+ (lecture/écriture, supprime contenu)
                                         a+ (ajout lecture/écriture, fin de fichier)
    fclose(<fichier>) : fermer fichier ouvert
    feof(<fichier>)   : tester la fin d'un fichier

    [LECTURE]
    fgetc(<fichier>) :                          : lit un caractere
    fgets(<chaine>, <taille_chaine>, <fichier>) : lit une ligne
    fscanf(<fichier>, <format>, ...)            : lit du texte formaté

    [ECRITURE]
    fputc(<caractere>, <fichier>)               : écrit un caractère
    fputs(<chaine>, <taille_chaine>, <fichier>) : écrit une ligne de texte
    fprintf(<fichier>, <format>, ...)           : écrit du texte formaté

    [POSITIONNEMENT]
    ftell(<fichier>) : retourne position curseur dans un fichier

    fseek(<fichier>, <deplacement>, <origine>) : déplace curseur

        -> <origine> : SEEK_SET (debut fichier)
                       SEEK_CUR (position courante)
                       SEEK_END (fin fichier)

    rewind(<fichier>) : réinitialise la position du curseur

    [DIVERS]
    rename(<ancien_nom>, <nouveau_nom>)
    remove(<fichier>)

*/

int main(void) {
    FILE *fichier ;
    remove("sauvegarde.txt");
    return 0;
}