#include<stdio.h>
void nhapa(int a[][100], int n, int m)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void nhapb(int b[][100], int n, int m)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
}
void tong(int a[][100], int b[][100],int c[][100], int n,int m)
{
    int i,j;
    printf("Ma tran tong\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n1, m1, n2, m2;
    int a[100][100], b[100][100], c[100][100];
    scanf("%d%d", &n1, &m1);
    nhapa(a,n1,m1);
    scanf("%d%d", &n2, &m2);
    nhapb(b,n2,m2);
    if(n1==n2&&m1==m2)
    {
        tong(a,b,c,n1,m1);
    }
    else
    {
        printf("Du lieu vao sai");
    }
}
