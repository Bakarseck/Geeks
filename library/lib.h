#ifndef LIB_H
#define LIB_H

#include <stdio.h>

void Tabulation() {
    putchar('\t');
}

void PrintChar(char c) {
    putchar(c);
}

void NextLine() {
    putchar(10);
}

void PrintString(char *str) {
    int i = 0;
    while (str[i] != '\0')
    {
        PrintChar(str[i]);
        i++;
    } 
}

void PrintIntegers(int n) {
    int i, j, tab[10];
    if (n < 0)
    {
        PrintChar(45);
        n = -n;
    }
    

    if (n == 0)
    {
        PrintChar(48);
    }
    
    for (i = 0; n != 0 ; i++)
    {
        tab[i] = n % 10 ; 
        n = n / 10;
    }
    for (j = i - 1 ;  j >= 0 ; j--)
    {
        PrintChar(tab[j] + '0');
    }
}

void PrintDouble(double d) {
    double reste = d - (int) d ;

    PrintIntegers((int) d);

    PrintChar('.');

}

double gain(double code, int nbJours, int mise ) {
    return PowD(code, nbJours) * mise;
}

void decoupeMinutes(int *heures, int *minutes)
{
    *heures = *minutes / 60;  // 90 / 60 = 1
    *minutes = *minutes % 60; // 90 % 60 = 30

    PrintString("Il est : ");
    PrintIntegers(*heures);
    PrintString(" h ");
    PrintIntegers(*minutes);
}

#endif