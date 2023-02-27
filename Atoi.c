#include<stdio.h>

int giveMeTheCodeAscii(char c) {
    return c ;
}

void Tabulation() {
    printf("\t");
}

void convDecToBin(int nbrAConvertir) {
    int tab[10];
    int i = 0;

    while (nbrAConvertir != 0) {
        tab[i] = nbrAConvertir % 2;
        nbrAConvertir = nbrAConvertir / 2;
        i++;
    }
        
    for (int j = i - 1; j >= 0; j--)
    {
        printf ("%d", tab[j]);
    }
}

int main() {

    char *phrase = "Bakar";
    int i = 0;

    while (phrase[i] != '\0')
    {
        convDecToBin(giveMeTheCodeAscii(phrase[i]));
        Tabulation();
        i++;
    }

    //printf("%d", giveMeTheCodeAscii('A'));

    
}