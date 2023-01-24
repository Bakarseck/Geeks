#ifndef LIB_H
#define LIB_H

#include <stdio.h>

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

void PrintNbr(int n) {
    int i, j, tab[10];
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

#endif