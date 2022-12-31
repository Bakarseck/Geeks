// #include<stdio.h>

void PrintChar(char c){
    putchar(c);
}

void NextLine(){
    PrintChar(10);
}

void PrintString(char *str){
    for (int i = 0; str[i] != '\0'; i++)
    {
        PrintChar(str[i]);
    }   
}

int main(){
    int popsicles;
    int siblings;

    scanf("%d %d", &siblings, &popsicles );

    if ( popsicles % siblings == 0 )
    {
        PrintString("give away");
    } else {
        PrintString("eat them yourself");
    }
    
}