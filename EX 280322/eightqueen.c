#include <stdio.h>
#include <math.h>

int chess[8], count;

void print(int n)
{
    int i, j;
    printf("\n\nKet qua %d:\n\n", count++);

    for (i = 1; i <= n; i++)
        printf("\t%d", i);

    for (i = 1; i <= n; i++)
    {
        printf("\n\n%d", i);
        for (j = 1; j <= n; j++) 
        {
            if (chess[i] == j)
                printf("\tQ"); 
            else
                printf("\t-"); 
        }
    }
}

int place(int row, int col)
{
    int i;
    for (i = 1; i <= row - 1; i++)
    {
        if (chess[i] == col)
            return 0;
        else if (abs(chess[i] - col) == abs(i - row))
            return 0;
    }

    return 1; 
}

void queen(int row, int n)
{
    int col;
    for (col = 1; col <= n; col++)
    {
        if (place(row, col))
        {
            chess[row] = col; 
            if (row == n)        
                print(n);        
            else                 
                queen(row + 1, n);
        }
    }
}

int main()
{
    int n=8, i, j;
    queen(1, n);
    return 0;
}