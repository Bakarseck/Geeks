#include<stdio.h>

int giveMeTheIndex(char c){
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int i=0;
    while (alphabet[i] != '\0')
    {
        if(c==alphabet[i]){
            return i;
        }
        i++;
    }
    int j = 0;
}

char giveMetheEquivalent(int a){
    char reverseAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return reverseAlphabet[a];
}

int main() {
    char str[] = "hello world";
    int i = 0;
        while (str[i] != '\0')
        {
            if (str[i] >= 97 && str[i] <= 122 )
            {
                str[i] = giveMetheEquivalent(giveMeTheIndex(str[i]));
            }
            i++;
        }
    
    
    printf("%s", str);
}