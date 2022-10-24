#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    char ten[100];
    int sbd;
    float diem1;
    float diem2;
    float diem3;
}sv;
void nhap(sv a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        scanf("%s",a[i].ten);
        scanf("%d",&a[i].sbd);
        scanf("%f",&a[i].diem1);
        scanf("%f",&a[i].diem2);
        scanf("%f",&a[i].diem3);
    }
}
void xuat(sv a[],int n)
{
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(((a[i].diem1)+(a[i].diem2)+(a[i].diem3))>=15&&a[i].diem1>=1&&a[i].diem2>=1&&a[i].diem3>=1)
        {
        printf("%s %d %.2f %.2f %.2f %.2f",a[i].ten,a[i].sbd,a[i].diem1,a[i].diem2,a[i].diem3,((a[i].diem1)+(a[i].diem2)+(a[i].diem3)));
        printf("\n");
        dem++;
        }
    }
    printf("So thi sinh thi do la: %d\n",dem);
}
int main()
{
    int n;
    sv a[100];
    scanf("%d",&n);
    nhap(a,n);
    printf("Danh sach thi sinh thi do\n");
    xuat(a,n);
}
