#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    char ten[100];
    int ma;
    float diem1;
    float diem2;
    float diem3;
}sv;
void nhap(sv a[],int n)
{
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        scanf("%s",a[i].ten);
        scanf("%d",&a[i].ma);
        scanf("%f",&a[i].diem1);
        scanf("%f",&a[i].diem2);
        scanf("%f",&a[i].diem2);
    }
}
void xuat(sv a)
{
        printf("%s %d %.2f %.2f %.2f %.2f",a.ten,a.ma,a.diem1,a.diem2,a.diem3,((a.diem1)+(a.diem2)+(a.diem3))/3);
        printf("\n");
}
void sx(sv a[],int n)
{
   	float max=((a[0].diem1)+(a[0].diem2)+(a[0].diem3))/3;
    int dem=0;
    for(int i=1;i<n;i++)
    {
    	if(max<((a[i].diem1)+(a[i].diem2)+(a[i].diem3))/3);
    	{
    		max=((a[i].diem1)+(a[i].diem2)+(a[i].diem3))/3;
    		dem=i;
		}
	}
    printf("So thu tu cua sinh vien: %d",dem);
    xuat(a);
}
int main()
{
    int n;
    sv a[100];
    scanf("%d",&n);
    nhap(a,n);
    sx(a,n);
}
