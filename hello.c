#include<stdio.h>

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

    char chaine[25] = "Hello World !";
   
    PrintString(chaine);
    NextLine();
    
    return 0;
}