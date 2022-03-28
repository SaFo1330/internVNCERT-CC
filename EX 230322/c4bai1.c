#include<stdio.h>

int main()
{
    int i, j, m=6, n=6, a[100][100];
    
    for(i = 1; i <=m; i++){
      for(j = 1; j <=n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
    }
    for(i = 1; i <=m; i++)
    {
      for(j = 1; j <=n; j++){
         printf("%d\t", a[i][j]);
      }
         printf("\n");
    }

}