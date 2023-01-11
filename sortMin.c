#include<stdio.h>

int main(){
    int tab[5];
    int tabMin[5];

    for (int i = 0; i < 5 ; i++)
    {
        tab[i] = 5-i;
    }

    for (int i = 0; i < 5; i++)
    {
        int min = tab[i];
        for (int j = 0; i < 5; j++)
        {
            if ( tab[j] < tab[i] )
            {
                min = tab[j];
            }
            
        }
        tabMin[i] = min;  
    }
    printf("%d", tabMin[0]);
    
}