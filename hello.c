#include "library/lib.h"

int main(){

    char chaine[25] = "Hello World !";
    int i = 0;

    while (chaine[i] != '\0')
    {
        PrintChar(chaine[i]);
        i++;
    }

    NextLine();
    
    return 0;
}