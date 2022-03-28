#include <stdio.h>
int main() 
{
  int i, n;
  float S,T;
  T = 0;
  S = 0;
  printf("\nNhap n: ");
  scanf("%d", &n);
 
  for(i= 1; i<= n; i++)
    {
        T= T + i;
        S= S + (float)1/T;    }
  printf("\nS(n) la: %0.3f ", S);
}
