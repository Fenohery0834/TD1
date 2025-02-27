#include<stdio.h>

int main()
  {
      int a,b;
      
      printf("Entrer le premier nombre: ");
      scanf("%d", &a);
      printf("Entrer le deuxième nombre: ");
      scanf("%d", &b);
        
      if((( a>0) && (b>0)) || ((a<0) && (b<0)))
      {
          printf("le produit est positif\n");
      }
      else 
      {
          printf("Le produit est négatif\n");
      }
      return(0);
                
  }
