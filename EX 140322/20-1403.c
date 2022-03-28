#include<stdio.h>
#include<conio.h>

int main()
{

    int i=1, n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    while(i<=n)
    {
        if(n % i == 0)
        {
          printf("%3d", i);
          i++;
          
        }
    }
getch();
return 0;
}