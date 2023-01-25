#include "../library/lib.h"
#include "../library/calc.h"
#include "../library/sort.h"


int main() {
    int a = 0;
    int b = 90 ;
    int t[10] ;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        t[i] = n - i ;
    }

    PrintTable(t, n);
    NextLine();
    PrintIntegers(max(t, n));
    Tabulation();
    PrintIntegers(min(t, n));
}