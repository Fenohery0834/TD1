#include<stdio.h>

int main()

{
    int a,b,c,temp;
    
    printf("Entrer la valeur de a: ");
    scanf("%d", &a);
    printf("Entrer la valeur de b: ");
    scanf("%d", &b);
    printf("Entrer la valeur de c: ");
    scanf("%d", &c);
    
    temp=a;
    a=b;
    b=c;
    c=temp;
    
    printf("Après l'échange:%d,%d,%d",a,b,c);
}
