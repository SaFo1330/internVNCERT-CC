#include<stdio.h>
#include <math.h>
int main()
{
   int x, i, n;
   long T=1, Y=1, Z=1;
   float S=1+x;
   printf("\nNhap x: ");
   scanf("%d", &x);
   printf("\nNhap n: ");
   scanf("%d", &n);
   if(n==0){
       printf("\nS(n) :%d", (1+x));
   }
       else
       {
          for(i=1; i<=n; i++)
          {
            T= pow(x, (2*i + 1));
            Y= i*2 + 1;
            Z= Z* Y* (Y-1);
            S= S+ (float)T/Z;
          }
        printf("\nS(n) la: %0.3f", S); 
       
       }
   
}