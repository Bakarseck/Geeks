#ifndef MYSTRING
#define MYSTRING
#include <stdio.h>
#include "lib/lib.h"


//Converti une chaine de caractère en nombre
int Atoi(char *str){
    int num = 0 ; 
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            num = (str[i] - '0') + num * 10;
        } 
    }
    return num;
}

//Ajoute la chaîne source à celle de la destination
char *Strcat(char *destination, char *source){
    int i = 0;
    while (destination[i] != '\0')
    {
        i++;
    }

    int j = 0;

    while (source[j] != '\0')
    {
        destination[i] = source[j];
        i++;
        j++;
    }

    destination[i] = '\0';
    return destination;
       
}

//Compte le nombre de caractère présents dans une chaîne de caractère
int Strlen(char str[]){
    int i=0;
    while (str[i] != '\0')
    {
        i++;
    } 
    return i;
}

//Compare deux chaînes de caractère
int Strcmp(char *chaine1, char *chaine2){

    if (*chaine1 == *chaine2)
    {
        return 0;
    } else if (*chaine1 > *chaine2) {
        return 1;
    } else {
        return -1 ;
    }
}

//Copie la chaîne source à la destination
char *Strcpy(char *destination, char *source)
{
    int i;

    for (i = 0; source[i] != '\0'; ++i)
        destination[i] = source[i];

    destination[i] = '\0';
    return destination;
}

#endif
