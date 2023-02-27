#include "../library/lib.h"
#include "../library/calc.h"
#include "../library/sort.h"
#include "../library/struct.h"

void ValSup(int t1[], int t2[], float m) {
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (t1[i] > (int)m) {
            t2[j] = t1[i];
            j++;
        }
    }
    
}


int main() {

    int diviseurCommun ;

    diviseurCommun = PPCM(25, 45) ;

    // PrintIntegers(diviseurCommun) ;
    int n = 10;
    int t[n] ;
    for (int i = 0; i < n; i++)
    {
        t[i] = n - i ;
    }

    PrintTable(t, n) ;
    NextLine() ;
    InsertSort(t, n);
    PrintTable(t, n);
    
    return 0;

    
}