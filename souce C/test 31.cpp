#include<stdio.h>
void nhap(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void max(float a[],int n)
{
    int vt=1;
    for(int i=1;i<n;i++)
    {
        if(a[vt]<a[i]) vt=i;
    }
    printf("Phan tu lon nhat co vi tri %d, co gia tri %f",vt,a[vt]);
}
int main()
{
    int n;
    float a[n];
    scanf("%d",&n);
    nhap(a,n);
    max(a,n);
}
