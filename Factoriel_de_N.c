#include<stdio.h>

int main()

{
    int n,fact=1,i;
    printf("Entrer une valeur pour N: ");
    scanf("%d", &n);
    
    for (i=1;i<=n;i++)
    {
         fact *=i;
    }
    printf("Le factoriel de %d est:%d", n,fact);
    
    return(0);
    
}
    