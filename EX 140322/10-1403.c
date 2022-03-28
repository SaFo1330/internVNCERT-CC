#include <stdio.h>
#include <math.h>
int main() 
{
  int x, n;
  long T;
  printf("\nNhap x: ");
  scanf("%d", &x);
  printf("\nNhap n: ");
  scanf("%d", &n);
  
  T= pow(x,n);
  printf("\nT(n) la: %ld ", T);
}
