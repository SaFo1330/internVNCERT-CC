#include<stdio.h>

int main()
{
   int x = 11, y = 6, mid = (x - 1)/2, i, j;
   
   for (i = 0; i < y; i++)
   {
        for (j = 0; j < x; j++)
        {
            if (i == y - 1)
            {
                printf("*");
                continue;
            }
            if (j <= (mid - i) || j >= (mid + i))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
   }
   return 0;
}

