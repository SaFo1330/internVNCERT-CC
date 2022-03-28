#include <stdio.h>
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

  for(i= 1; i<= n; i++)
    {
        T = T * x;
        S = S + T;
    }
  printf("\nS(n) la: %ld ", S);
}
