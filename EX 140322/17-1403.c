#include<stdio.h>

int main()
{
   int x, i, n;
   long T=1, Y=1;
   float S=0;
   printf("\nNhap x: ");
   scanf("%d", &x);
   printf("\nNhap n: ");
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
       T= T*i;
       Y= Y*x;
       S= S+ (float)Y/T;
   }
   printf("\nS(n) la: %0.3f", S);
}