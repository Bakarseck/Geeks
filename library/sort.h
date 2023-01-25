#ifndef SORT_H
#define SORT_H
#include "lib.h"

void InsertSort(int t[], int n) {
    int j = 0 ;
    int temp = 0;
    while (j < n) {
        for (int i = 1; i < n; i++ ) {
            if (t[i-1] > t[i]) {
                temp = t[i-1] ;
                t[i-1] = t[i] ;
                t[i] = temp ;
                j = 0 ;
            } else {
                j += 1 ;
            }
        }
    }
}
    

#endif
