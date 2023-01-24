#include<stdio.h>

int occurence(int nombreAchercher, int tableau[], int tailleDuTableau) {
    int compteur = 0;
    for(int i=0; i < tailleDuTableau; i++) {
        if (nombreAchercher == tableau[i]){
            compteur++;
        }
    }
    return compteur;
}

int main() {
    int n;
    scanf("%d", &n);
    int t[n];
    for (int i=0;i<n; i++){
        t[i] = 2;
    }
    int compteur;
    int x = 3;
    compteur = occurence(x, t, n);
    printf("%d", compteur);
    return 0;    
}