#include <stdio.h>
#include <math.h>

int main() 
{
  int i, n, x;
  long S;
  int T=1;
  S = 0;
  printf("\nNhap x: ");
  scanf("%d", &x);
  printf("\nNhap n: ");
  scanf("%d", &n);

  for(i= 0; i<= n; i++)
    {
        T = pow(x, (2*i+ 1));
        S = S + T;
    }
  printf("\nS(n) la: %ld ", S);
}
