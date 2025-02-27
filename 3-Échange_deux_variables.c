#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Entrer la valeur de a: ");
    scanf("%d", &a);
    printf("Entrer la valeur de b: ");
    scanf("%d", &b);
    
    temp=a;
    a=b;
    b=temp;
    printf("Après l'échange:%d, %d", a, b);
 }   
