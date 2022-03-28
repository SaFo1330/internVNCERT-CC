#include <stdio.h>
int main() 
{
  int i, n;
  float S;
  S = 1;
  printf("\nNhap n: ");
  scanf("%d", &n);
 
  for(i= 1; i<= n; i++)
    {
        S= S + 1.0/(2*i+1);
    }
  printf("\nS(n) la: %.3f ", S);
}