#include<stdio.h>

void AfficheTab(int t[], int n){
    if ( n > 0 )
    {
        AfficheTab(t, n - 1);
        printf("%d \n", t[n]);
    }  
}

int main() {
    int t[10];
    for (int i = 0; i < 10; i++)
    {
        t[i] = i ;
    }
    AfficheTab(t, 10);
}