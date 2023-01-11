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

int main(){

    char chaine[25] = "Hello World !";

    putchar('b');
   
    NextLine();
    PrintString(chaine);
    // PrintNbr(10);
    
    return 0;
}