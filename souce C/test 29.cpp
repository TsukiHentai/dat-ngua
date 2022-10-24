#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
    char ten[100];
    int ma;
    float hsl;
    int phucap;
}nv;
void nhap(nv a[],int n)
{
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        scanf("%s",a[i].ten);
        scanf("%d",&a[i].ma);
        scanf("%f",&a[i].hsl);
        scanf("%d",&a[i].phucap);
    }
}
void xuat(nv a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s %d %.2f %d %.2f",a[i].ten,a[i].ma,a[i].hsl,a[i].phucap,((a[i].hsl)*2000000+(a[i].phucap)));
        printf("\n");
    }
}
void sx(nv a[],int n)
{
    nv b;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(a[i].ten,a[j].ten)>0)
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    xuat(a,n);
}
int main()
{
    int n;
    nv a[100];
    scanf("%d",&n);
    nhap(a,n);
    printf("Danh sach nhan vien\n");
    printf("%d\n",n);
    sx(a,n);
}
