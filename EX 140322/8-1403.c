#include <stdio.h>
int main() 
{
  int i, n;
  float S;
  S = 0;
  printf("\nNhap n: ");
  scanf("%d", &n);
 
  for(i= 0; i<= n; i++)
    {
        
        S = S + (1.0/(2*i+2))*(2*i+1);
        
        
    }
  printf("\nS(n) la: %.3f ", S);
}
