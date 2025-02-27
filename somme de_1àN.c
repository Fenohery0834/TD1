#include<stdio.h>

int main()

{
   int N,a=0,i;
   printf("Entrer un entier N: ");
   scanf("%d", &N);
   
   for(i=1;i<=N;i++)
   {
      a +=i;
      printf("La somme de 1 à N est:%d.\n", a);
   }
   
   return(0);
   
}