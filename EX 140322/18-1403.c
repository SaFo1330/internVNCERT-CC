#include<stdio.h>
#include <math.h>
int main()
{
   int x, i, n;
   long T=1, Y=1, Z=1;
   float S=1;
   printf("\nNhap x: ");
   scanf("%d", &x);
   printf("\nNhap n: ");
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
       T= pow(x, (2*i));
       Y= i*2;
       Z= Z* Y* (Y-1);
       S= S+ (float)T/Z;
   }
   printf("\nS(n) la: %0.3f", S);
}