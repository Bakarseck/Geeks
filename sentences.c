#include <stdio.h>

void PrintChar(char c){
    printf("%c", c);
}

void NextLine(){
    printf("\n");
}

void PrintString(char str[]){
    for (int i = 0; str[i] != '\0'; i++)
    {
        PrintChar(str[i]);
    }
    
}

int main(){
    char str[100];

    char message[50] = "Please Enter a sentences : ";
    char output[50] = "Your message is : ";
    NextLine();

    PrintString(message);

    NextLine();
    
    fgets(str, 100, stdin);

    NextLine();

    PrintString(output);

    NextLine();

    PrintString(str);
    

}