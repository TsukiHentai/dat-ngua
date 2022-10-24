#include<stdio.h>
#include<stdlib.h>
void TamGiacDung(int n)
{
    int i,j;
    int temp=n-1;
    for(i=1; i<=n;i++)
    {
        for( j=1;j<=temp;j++)
            printf(" ");
        for( j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
        temp--;
    }
}
void TamGiacNguoc(int n)
{
    int temp=0;
    int i,j;
    for(i=n; i>=1;i--)
    {
        for( j=1;j<=temp;j++)
            printf(" ");
        for( j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
        temp++;
    }
}
void In(int n)
{
    printf("%d\n",n);
    
    if(n<0)
        TamGiacNguoc(abs(n));
    else 
        TamGiacDung(n);
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    In(x);
    In(y);
    In(z);
    
}
