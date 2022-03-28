#include <stdio.h>
int main() 
{
  int i, n;
  long T, S;
  T = 1;
  S = 0;
  printf("\nNhap n: ");
  scanf("%d", &n);
 
  for(i= 1; i<= n; i++)
    {
        T = T * i;
        S = S + T;
    }
  printf("\nS(n) la: %ld ", S);
}
