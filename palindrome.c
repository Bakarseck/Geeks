#include<stdio.h>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
int parfait(int n){
    int sommeDiviseurs = 0 ;
    for (int i = 1; i <= n/2 ; i++)
    {
        if (n % i == 0)
        {
            sommeDiviseurs += i;
        }
    }
    if (n == sommeDiviseurs)
    {
        return 1;
    } 
    return 0;
}

int main() {
    for (int i = 0; i <= 1000; i++)
    {
        if (parfait(i))
        {
            printf("%d \n", i);
        }
        
    }
}