#include<stdio.h>

int main()

{
  int a,b,c,max;
  printf("Entrer la valeur de a: ");
  scanf("%d", &a);
  printf("Entrer la valeur de b: ");
  scanf("%d", &b);
  printf("Entrer la valeur de c: ");
  scanf("%d", &c);
  
  max=a;
  if(b>max)
  {
  max=b;
  }
  else(c>max);
  {
  max=c;
  }
  
  printf("Le maximum est:%d.\n",max);
  
  return(0);
  
}