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
    Student student;
    printf("Nhap thong tin thi sinh: \n");

    fflush(stdin);
    printf("Ho: ");
    gets(student.hoten.ho);
    fflush(stdin);
    printf("Ten dem: ");
    gets(student.hoten.dem);
    fflush(stdin);
    printf("Ten: ");
    gets(student.hoten.ten);

    fflush(stdin);
    printf("Xa: ");
    gets(student.quequan.xa);
    fflush(stdin);
    printf("Huyen: ");
    gets(student.quequan.huyen);
    fflush(stdin);
    printf("Tinh: ");
    gets(student.quequan.tinh);

    fflush(stdin);
    printf("Truong: ");
    gets(student.truong);

    printf("Tuoi: ");
    scanf("%d", &student.tuoi);

    printf("SBD: ");
    scanf("%d", &student.sbd);  

    fflush(stdin);
    printf("Diem Toan: ");
    scanf("%d", &student.diem.toan);
    fflush(stdin);
    printf("Diem Ly: ");
    scanf("%d", &student.diem.ly);
    fflush(stdin);
    printf("Diem Hoa: ");
    scanf("%d", &student.diem.hoa);
  
    printf("Ho va Ten      Que Quan           Truong        Tuoi         SBD         Diem toan       Diem ly        Diem hoa\n");
    printf("%s %s %s   %s %s %s  %s                 %d           %d            %d           %d              %d ", student.hoten.ho, student.hoten.dem, student.hoten.ten, student.quequan.xa, student.quequan.huyen, student.quequan.tinh, student.truong, student.tuoi, student.sbd, student.diem.toan, student.diem.ly, student.diem.hoa);
    return 0;
}
