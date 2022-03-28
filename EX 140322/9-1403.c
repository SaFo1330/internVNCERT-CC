#include <stdio.h>
int main() 
{
  int i, n;
  long T;
  T = 1;
  printf("\nNhap n: ");
  scanf("%d", &n);
 
  for(i= 1; i<= n; i++)
    {
        T = T * i;
    }
  printf("\nT(n) la: %ld ", T);
}
