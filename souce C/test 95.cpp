#include<stdio.h>
void nhap(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{
    int i,j,tg;
    printf("%d\n", n);
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if((a[i]%2!=0) && (a[j]%2!=0))
                {
                    if(a[i]>a[j])
                    {
                        tg=a[i];
                        a[i]=a[j];
                        a[j]=tg;
                    }
                }
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int i,n;
    int a[1000];
    scanf("%d", &n);
    nhap(a,n);
    xuat(a,n);
}
