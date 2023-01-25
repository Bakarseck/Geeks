#ifndef CALC_H
#define CALC_H
#include "lib.h"
#include "sort.h"

int PowI(int nombreAElever, int puissance ){
  int result=1;
  if (puissance == 0)
  {
    return 1;
  }
  
  for (int i = 1; i <= puissance ; i++)
  {
    result = result * nombreAElever;
  }
  return result; 
}

double PowD(double nombreAElever, int puissance ){
  double result = 1.0;
  if (puissance == 0)
  {
    return 1;
  }
  
  for (int i = 1; i <= puissance ; i++)
  {
    result = result * nombreAElever;
  }
  return result; 
}

int max(int t[], int n) {
    InsertSort(t, n);
    return t[n-1];
}

int min(int t[], int n) {
  return t[0];
}

void PrintTable(int t[], int n) {
    for (int i = 0; i < n; i++)
    {
        PrintIntegers(t[i]);
        Tabulation();
    }
}

#endif