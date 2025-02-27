#include<stdio.h>

int main()

{
    int a,b,coef1,coef2,moyenne;
    
    printf("Entrer la première note: ");
    scanf("%d", &a);
    printf("Entrer le coefficient de la première note: ");
    scanf("%d", &coef1);
    printf("Entrer la deuxième note: ");
    scanf("%d", &b);
    printf("Entrer le coefficient de la deuxième note: ");
    scanf("%d", &coef2);
    
    moyenne=((a*coef1+b*coef2)/(coef1+coef2));
    
    printf("La moyenne pondérée est:%d",moyenne);
}
