#include<stdio.h>

int main()

{
    int n,somme=0,i;
    printf("Entrer une valeur pour N: ");
    scanf("%d", &n);
    
    for (i=1;i<=n;i++)
    {
         somme +=i;
    }
    printf("La somme de 1 à %d est:%d.\n", n,somme);
    
    return(0);
    
}
    