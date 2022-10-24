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
void xuat(sv a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s %d %.2f %.2f %.2f %.2f",a[i].ten,a[i].ma,a[i].diem1,a[i].diem2,a[i].diem3,((a[i].diem1)+(a[i].diem2)+(a[i].diem3))/3);
        printf("\n");
    }
}
void sx(sv a[],int n)
{
    sv max;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            if(((a[i].diem1)+(a[i].diem2)+(a[i].diem3))/3>((a[j].diem1)+(a[j].diem2)+(a[j].diem3))/3)
            {
                max=a[i];
            }
        }
        for(int i=0;i<n;i++)
        printf("%s %d %.2f %.2f %.2f",max[i].ten,max[i].ma,max[i].diem1,max[i].diem2,max[i].diem3);
}
int vitri(sv a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
	    {   
	        dem++;
	        if(((a[i].diem1)+(a[i].diem2)+(a[i].diem3))/3>((a[i+1].diem1)+(a[i+1].diem2)+(a[i+1].diem3))/3);
	            {
	                dem--;
	                break;
	            }
	    }
    return dem;
}
int main()
{
    int n;
    sv a[100];
    scanf("%d",&n);
    nhap(a,n);
    printf("So thu tu cua sinh vien: %d",vitri(a,n));
    sx(a,n);
}
