#include<stdio.h>

void RemplirMatrice0(int **mat) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat[i][j] = i + 1;
        }
    }
}

void RemplirMatrice1(int **mat) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat[i][j] = i + 2;
        }
    }
}

void AfficherMatrice(int **mat) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", mat[i][j]);
        }

        printf("\n");
    }
}



int main() {
    int mat1[10][10], mat2[10][10], mul[10][10];

    RemplirMatrice0(mat1);
    RemplirMatrice1(mat2);
    
    printf("Affichage Matrice 1 : \n");

    AfficherMatrice(mat1);

    printf("Affichage Matrice 2 : \n") ;

    AfficherMatrice(mat2);

    
}