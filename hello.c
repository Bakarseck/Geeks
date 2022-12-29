#include <stdio.h>

void PrintChar(char c){
    printf("%c", c);
}

int main(){

    char chaine[25] = "Hello World";
    int i = 0;

    while (chaine[i] != '\0')
    {
        PrintChar(chaine[i]);
        i++;
    }
    
    return 0;
}