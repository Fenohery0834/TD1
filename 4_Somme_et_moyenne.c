#include<stdio.h>

int main()

{
    int a,b,somme,moyenne;
    printf("Entrer la première note: ");
    scanf("%d", &a);
    printf("Entrer la deuxième note: ");
    scanf("%d", &b);
    
    somme=a+b;
    moyenne=somme/2;
    
    printf("somme:%d,%d",somme,moyenne);
}
