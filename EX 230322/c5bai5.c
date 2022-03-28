#include<stdio.h>

void input(int *a, int n)
{
    int i; 
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void output(int *a, int n){
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void output2(int *a, int *b, int *c, int *d, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t%d\t%d\t%d\tMin(%d, %d, %d, %d) = %d\t\tMax(%d, %d, %d, %d) = %d\n", a[i], b[i], c[i], d[i], a[i], b[i], c[i], d[i], min(a[i], b[i], c[i], d[i]), a[i], b[i], c[i], d[i], max(a[i], b[i], c[i], d[i]));
    }
}

int min(int a, int b, int c, int d){
    int min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    if (min > d) min = d;
    return min;
}

int max(int a, int b, int c, int d){
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (max < d) max = d;
    return max;
}

int main()
{
    int n, a[100], b[100], c[100], d[100];
    printf("\nNhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("\nNhap mang a : \n"); 
    input(a, n);
    printf("\nNhap mang b: \n"); 
    input(b, n);
    printf("\nNhap mang c: \n"); 
    input(c, n);
    printf("\nNhap mang d: \n"); 
    input(d, n);
    printf("\nMang a la: ");
    output(a, n);
    printf("\nMang b la: ");
    output(b, n);
    printf("\nMang c la: ");
    output(c, n);
    printf("\nMang d la: ");
    output(d, n);
    output2(a, b, c, d, n);
   

}