#include <stdio.h>

int Pow(int nombreAElever, int puissance ){
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

int main () {
    
    int reponse = 1 ;
    
    while(reponse == 1){
      int baseDepart, nbrAConvertir, baseArrivee;
      printf ("Veuillez donner la base de depart : \n");
      scanf ("%d", &baseDepart);
    
      printf ("Veuillez donner le nombre a convertir :\n");
      scanf ("%d", &nbrAConvertir);
    
      printf ("Veuillez donner la base d'arrivee :\n");
      scanf ("%d", &baseArrivee);
    
      int tab[10], compteur=0,i, dernierchiffre, reelNbrAConvertir, nbrDecimal=0, lastDigit = 0;
    
        switch (baseDepart) {
            case 2:
              compteur = 0;
              reelNbrAConvertir = nbrAConvertir;
              while ( nbrAConvertir != 0)
              {
                lastDigit = nbrAConvertir % 10;
                if (lastDigit != 0 && lastDigit != 1)
                {
                  printf("Veuillez saisir un binaire valide : \n");
                  scanf("%d", &nbrAConvertir);
                  reelNbrAConvertir = nbrAConvertir;
                  continue;
                }
                nbrAConvertir = nbrAConvertir / 10;
              }
              
              while (reelNbrAConvertir != 0)
            	{
            	  dernierchiffre = reelNbrAConvertir % 10;
            	  reelNbrAConvertir = reelNbrAConvertir / 10;
            	  nbrDecimal = nbrDecimal + (dernierchiffre * Pow (2, compteur));
            	  compteur++;
            	}

              printf ("Le nombre decimal est =  %d ", nbrDecimal);
            break;

            case 10:
                for (i = 0; nbrAConvertir > 0; i++)
            	{
            	  tab[i] = nbrAConvertir % 2;
            	  nbrAConvertir = nbrAConvertir / 2;
            	}
            
              printf ("\nLe nombre binaire est = ");
            
                for (i = i - 1; i >= 0; i--)
            	{
            	  printf ("%d", tab[i]);
            	}
            break;
        }
        printf("\nVoulez vous recommencez ? \n Entrez 1 pour Oui et 0 pour Non : \n");
        scanf("%d", &reponse);
    }

  return 0;
}
