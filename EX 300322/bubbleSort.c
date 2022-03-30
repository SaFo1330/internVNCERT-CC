#include <stdio.h>


void input(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
   
   
}
void bubbleSort(int *a, int n)
{
    int step, i;  
    for(step = 0; step < n - 1; step++)
    {
        for (i = 0; i < n - step - 1; i++) 
        {

            if (a[i] > a[i + 1]) 
            {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
            }
        }
    }
}


void output(int *a, int n) 
{
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("%d\t", a[i]);
    }
}

int main() 
{
    int a[100], n;
 
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    input(a, n);
   
    printf("Mang vua nhap la:\n");
    output(a, n);

    bubbleSort(a, n);
  
    printf("\nMang sau khi sap xep la:\n");
    output(a, n);
}