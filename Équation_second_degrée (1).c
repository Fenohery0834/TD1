#include<stdio.h>
#include<math.h>

int main()

{
   int a,b,c,delta,x1,x2,im,re;
   printf("Entrer la valeur de a: ");
   scanf("%d", &a);
   printf("Entrer la valeur de b: ");
   scanf("%d",&b);
   printf("Entrer la valeur de c:");
   scanf("%d", &c);
   if(a==0)
   {
      if(b!=0)
      {
      x1=-c/b;
      printf("C'est une équation de première degré.\n");
      printf("La solution est:%d", x1);
      }
      else
      {
      printf("Ce n'est pas un équation.\n");
      }
   }
   else
   {
   delta=((b*b)-(4*a*c));
     if(delta>0)
     {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("Deux solutions réelles:%d,%d",x1,x2);
     }
     else if(delta==0)
     {
       x1=-b/(2*a);
       printf("Une solution double:%d",x1);
     }
     else
       re=-b/(2*a);
       im=sqrt(delta)/(2*a);
       printf("Deux solutions complexes:%d,%d",re,im);
     }
     
     return(0);
     
}