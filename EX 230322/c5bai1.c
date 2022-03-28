#include<stdio.h>

int main()
{
    int a, b, c, d, e, f ;
    float D, Dx, Dy, x, y;
  
    printf("Nhap a: \n");
    scanf("%d", &a);
    printf("Nhap b: \n");
    scanf("%d", &b);
    printf("Nhap c: \n");
    scanf("%d", &c);
    printf("Nhap d: \n");
    scanf("%d", &d);
    printf("Nhap e: \n");
    scanf("%d", &e);
    printf("Nhap f: \n");
    scanf("%d", &f);
    printf("Giai phuong trinh\n%dx + %dy = %d\n%dx + %dy = %d\n", a, b, c, d, e, f);
    D = a*e - b*d;
    Dx = c*e - b*f;
    Dy = a*f - d*c;
    if(D==0)
    {
        if(Dx==0 && Dy==0)
        {
            printf("Phuong trinh vo so nghiem.");
        }
        else
        {
            printf("Phuong trinh vo nghiem.");
        }
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        printf("Phuong trinh co nghiem (x;y) la: (%.3f;%.3f)", x, y);
    }


}