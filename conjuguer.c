#include "library/lib.h"
#include "library/mystring.h"

int main(int numberOfArguments, char** arguments) {
    char *verbe ;
    verbe = arguments[1];

    int length = Strlen(verbe);

    char radicale[TAILLE_MAX]  = "" ;
    char root[TAILLE_MAX] = "" ;

    for (int i = 0; i < length - 2; i++)
    {
        radicale[i] = verbe[i] ;
    }
    Strcpy(root, radicale);

    PrintString("Je "); PrintString(Strcat(radicale, "e")); NextLine(); Strcpy(radicale, root);
    PrintString("Tu "); PrintString(Strcat(radicale, "es")); NextLine(); Strcpy(radicale, root);
    PrintString("Il "); PrintString(Strcat(radicale, "e")); NextLine(); Strcpy(radicale, root);
    if (radicale[length-3] == 'g' || radicale[length-3] == 'G')
    {
        PrintString("Nous "); PrintString(Strcat(radicale, "eons")); NextLine(); Strcpy(radicale, root);
    } else {
        PrintString("Nous "); PrintString(Strcat(radicale, "ons")); NextLine(); Strcpy(radicale, root);
    }
    PrintString("Vous "); PrintString(Strcat(radicale, "ez")); NextLine(); Strcpy(radicale, root);
    PrintString("Ils ou Elles "); PrintString(Strcat(radicale, "ent")); NextLine(); Strcpy(radicale, root);
}