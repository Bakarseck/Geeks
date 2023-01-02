// #include<stdio.h>

void PrintChar(char c){
    putchar(c);
}

void NextLine(){
    PrintChar(10);
}

void PrintString(char str[]){
    for (int i = 0; str[i] != '\0'; i++)
    {
        PrintChar(str[i]);
    }  
}

int giveMeTheIndex(char c){
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int i=0;
    while (alphabet[i] != '\0')
    {
        if(c==alphabet[i]){
            return i;
        }
        i++;
    }
    int j = 0;
    while (Alphabet[j] != '\0')
    {
        if(c==Alphabet[j]){
            return j;
        }
        j++;
    }  
}

char giveMetheEquivalent(int a){
    char reverseAlphabet[] = "zyxwvutsrqponmlkjihgfedcba";
    return reverseAlphabet[a];
}

int main(){
    char message[] = "Hello World !";
    int i=0;
    while (message[i] != '\0')
    {
        if ((message[i] >= 65 && message[i] <= 90) || (message[i] >= 97 && message[i] <= 122) )
        {
            message[i] = giveMetheEquivalent(giveMeTheIndex(message[i]));
        }
        i++;
    }
    PrintString(message);
    return 0;
}