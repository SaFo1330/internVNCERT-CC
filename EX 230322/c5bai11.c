#include<stdio.h>

int main()
{
    int m, n, p, dem=0;
    for(m=1; m<200; m++)
    {
        for(n=1; n<100; n++)
        {
            for(p=1; p<40; p++)
            {
                if(1000*m + 2000*n + 5000*p == 200000)
                {
                    printf("\nCan %d to 1000d, can %d to 2000d, can %d to 5000d", m, n,p );
                    dem ++;
                }
            }   
        }
    }
    printf("\nCo tat ca %d phuong an", dem);
}