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

int HasTwoSpecialCharacter(char str[20]){
    int i=0;
    int j=0;
    while (str[i] != '\0')
    {
        if ( str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '&' || str[i] == '*')
        {
            j++;
        }
        i++;
    }
    if (j >= 2)
    {
        return 1;
    } else 
    {
        return 0;
    }
}

int HasTwoDigits(char str[20]){
    int i=0;
    int j=0;
    while (str[i] != '\0')
    {
        if (str[i] >= 48 && str[i] <= 90)
        {
            j++;
        }
        i++;
    }
    if (j >= 2)
    {
        return 1;
    } else
    {
        return 0;
    }    
}

int isValidLength(char str[20]){
    int i=0;
    while (str[i] != '\0')
    { 
        i++;
    }
    if (i >= 14)
    {
        return 1;
    } else
    {
        return 0;
    } 
}

int main(){
    char message[20] = "HelloWorld2022@#";
    if (isValidLength(message) == 1)
    {
        if (HasTwoDigits(message) == 1)
        {
            if (HasTwoSpecialCharacter(message) == 1)
            {
                PrintString("Strong");
            } else
            {
                PrintString("Weak");
            }  
        } else
        {
            PrintString("Weak");
        }
    } else
    {
        PrintString("Weak");
    }  
    return 0;
}
