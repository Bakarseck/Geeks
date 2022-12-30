#include "library/lib.h"

int main(){
    char str[100];

    char message[50] = "Please Enter a sentences : ";
    NextLine();
    
    for (int i = 0; message[i] != '\0'; i++)
    {
        PrintChar(message[i]);
    }

    fgets(str, 100, stdin);

    NextLine();

    for (int i = 0; str[i] != '\0'; i++)
    {
        PrintChar(str[i]);
    }
    
}