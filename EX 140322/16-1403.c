#include <stdio.h>
int main() 
{
  int i, n, x;
  long Y;
  float S,T;
  Y = 1;
  T = 0;
  S = 0;
  printf("\nNhap x: ");
  scanf("%d", &x);
  printf("\nNhap n: ");
  scanf("%d", &n);
 
  for(i= 1; i<= n; i++)
    {
        T= T + i;
        Y= Y * x;
        S= S + (float)Y/T;    }
  printf("\nS(n) la: %0.3f ", S);
}
