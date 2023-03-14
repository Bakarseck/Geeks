#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matrix;
    int rows;
    int column;
    int i, j;

    printf("Taille de la matrice (format : <rows> <culomns>) : \n");
    scanf("%d %d", &rows, &column);

    // Allocation de mla matrice

    matrix = malloc(rows * sizeof(int*));

    if (matrix == NULL)
        exit(1);

    for ( i = 0; i < rows ; i++)
    {
        matrix[i] = malloc(column * sizeof(int));

        if(matrix[i] == NULL)
            exit(1);
    }

    

    
}