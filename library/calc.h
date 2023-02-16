#ifndef CALC_H
#define CALC_H
#include "lib.h"
#include "sort.h"

int PPCM(int a, int b) {
  int plusPetit = a, diviseurCommun;
  if (a > b)
  {
    plusPetit = b;
  }

  for (int i = 1; i <= plusPetit; i++)
  {
    if ( a % i == 0 && b % i == 0)
    {
      diviseurCommun = i ;
    }
  }

  return diviseurCommun ;
}

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

int SqrtI(int n) {
    int r;
    for (int i = 1; i <= n / i; i++)
    {
      r = n / i ;
    }
    if (PowI(r, 2) == n)
    {
      return r;
    }
    else {
      return 0;
    } 
}

int max(int t[], int n) {
    InsertSort(t, n);
    return t[n-1];
}

int min(int t[], int n) {
  return t[0];
}

void PrintTable(int *t, int n) {
    for (int i = 0; i < n; i++)
    {
        PrintIntegers(t[i]);
        Tabulation();
    }
}

#endif