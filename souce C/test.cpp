#include<stdio.h>
float Nhap(float a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
    }
}
int Xuli(float a[], int n, float k)
{
    int i,vt=0, d=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            vt=i;
            d++;
        }
    }
    if(d==0)
    {
        return -1;
    }
    else
    {
        return vt;
    }
}
int main()
{
    float a[1000];
    int n;
    float k;
    scanf("%d",&n);
    Nhap(a,n);
    scanf("%f",&k);
    if(Xuli(a,n,k)==-1)
    {
        printf("%.3f not found",k);
    }
    else
    {
        printf("Phan tu %.3f co vi tri %d",k,Xuli(a,n,k));
    }
}
