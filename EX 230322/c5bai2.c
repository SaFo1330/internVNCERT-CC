#include<stdio.h>
#include<math.h>

int main()
{
    int i, m, a[100], demam=0, demduong=0;
    float sa=0, sd=0, tba, tbd;
    printf("Nhap so phan tu cua day: ");
    scanf("%d", &m);
    printf("\nNhap day: \n");
    for(i = 0; i < m; i++)
    {  
         scanf("%d", &a[i]);
    }
    
    printf("Day vua nhap la: \n");
    for(i = 0; i < m; i++)
    {   
         printf("%d\t", a[i]);    
    }

    for(i = 0; i < m; i++)
    {   
         if(a[i]<0)
         {
              sa = sa + a[i];
              demam++;
         }     
    }

    if(demam == 0)
         printf("Khong co so am nao\n");
    else
    {
          tba=sa/demam;
          
          printf("\nTrung binh cong cua so am trong day la: %.3f\n", tba);
    }
  
    for(i = 0; i < m; i++)
    {   
         if(a[i]>0)
         {
              sd = sd + a[i];
              demduong++;
         }     
    }

    if(demduong == 0)
         printf("Khong co so duong nao\n");
    else
    {
          tbd=sd/demduong;
          
          printf("\nTrung binh cong cua so duong trong day la: %.3f\n", tbd);
    }


}