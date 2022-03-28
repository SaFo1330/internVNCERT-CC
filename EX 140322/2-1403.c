#include <stdio.h>
int main() 
{
  int i, n;
  long S;
  S = 0;
  printf("\nNhap n: ");
  scanf("%d", &n);
 
  for(i= 1; i<= n; i++)
    {
        S = S + i*i;
    }
  printf("\nS(n) la: %ld ", S);
}
