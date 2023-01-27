#ifndef SORT_H
#define SORT_H
#include "lib.h"

void InsertSort(int* t, int n) {
    int j = 0 ;
    int temp = 0;
    while (j < n) { //tant j est inférieur à n
        for (int i = 1; i < n; i++ ) {
            if (t[i-1] > t[i]) { // Si le tableau n'est pas trié
                temp = t[i-1] ;
                t[i-1] = t[i] ;
                t[i] = temp ; // Je permute
                j = 0 ; // Je reviens à la première ligne du tableau pour trier les premiers éléments
            } else {
                j += 1 ; // si le tableau est trié, il ajoute 1 dans j
            }
        }
    }
}
    

#endif
