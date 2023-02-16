#include "library/lib.h"
#include "library/mystring.h"

void Reverse(char* mot) {
    int len = Strlen(mot) ;
    int i = 0;
    char reverseMot[TAILLE_MAX] ;

    for (int i = len - 1, j = 0; i <= 0; i--, j++)
    {
        reverseMot[j] = mot[i] ;
    }
}

int main() {
    char* reverse = "bakar" ;
    Reverse(reverse) ;
    PrintString(reverse) ;
    return 0;
}