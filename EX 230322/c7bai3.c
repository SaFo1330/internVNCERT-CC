#include <stdio.h>

typedef struct
{
   char ho[100];
   char dem[100];
   char ten[100];
} HoTen;
typedef struct 
{
   int toan;
   int ly;
   int hoa;
} Diem;
typedef struct 
{
   char xa[100];
   char huyen[100];
   char tinh[100];
} QueQuan;
typedef struct
{
    char truong[100];
    int tuoi;
   int sbd;
   HoTen hoten;
   Diem diem;
   QueQuan quequan;   
} Student;

int main()
{
    Student student[20];
    int i, j;

    for (i = 0; i < 20; i++)
    {

    printf("Nhap thong tin thi sinh: \n");

    fflush(stdin);
    printf("Ho: ");
    gets(student[i].hoten.ho);
    fflush(stdin);
    printf("Ten dem: ");
    gets(student[i].hoten.dem);
    fflush(stdin);
    printf("Ten: ");
    gets(student[i].hoten.ten);

    fflush(stdin);
    printf("Xa: ");
    gets(student[i].quequan.xa);
    fflush(stdin);
    printf("Huyen: ");
    gets(student[i].quequan.huyen);
    fflush(stdin);
    printf("Tinh: ");
    gets(student[i].quequan.tinh);

    fflush(stdin);
    printf("Truong: ");
    gets(student[i].truong);

    printf("Tuoi: ");
    scanf("%d", &student[i].tuoi);

    printf("SBD: ");
    scanf("%d", &student[i].sbd);  

    fflush(stdin);
    printf("Diem Toan: ");
    scanf("%d", &student[i].diem.toan);
    fflush(stdin);
    printf("Diem Ly: ");
    scanf("%d", &student[i].diem.ly);
    fflush(stdin);
    printf("Diem Hoa: ");
    scanf("%d", &student[i].diem.hoa);
    }

    for (i = 0; i < 20; i++)
    {
        for (j = i + 1; j < 20; j++)
        {
            if (student[i].diem.toan + student[i].diem.ly + student[i].diem.hoa < student[j].diem.toan + student[j].diem.ly + student[j].diem.hoa)
            {
                Student sv = student[i];
                student[i] = student[j];
                student[j] = sv;
            }
            
        }
    
    }
  
    printf("Ho va Ten      Que Quan           Truong        Tuoi         SBD         Diem toan       Diem ly        Diem hoa\n");
    printf("%s %s %s   %s %s %s  %s                 %d           %d            %d           %d              %d ", student[i].hoten.ho, student[i].hoten.dem, student[i].hoten.ten, student[i].quequan.xa, student[i].quequan.huyen, student[i].quequan.tinh, student[i].truong, student[i].tuoi, student[i].sbd, student[i].diem.toan, student[i].diem.ly, student[i].diem.hoa);
    return 0;
}
