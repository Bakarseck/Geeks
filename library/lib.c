#include<stdio.h>

void PrintChar(char c){
    putchar(c);
}

void NextLine(){
    putchar(10);
}

void PrintString(char str[]){
    for (int i = 0; str[i] != '\0'; i++)
    {
        PrintChar(str[i]);
    }
}

void PrintNbr(int n){
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
