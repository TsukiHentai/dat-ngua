#include<stdio.h>
int coso(int n)
{
    if(n<=0)
    return 0;
    coso(n/2);
    printf("%d",n%2);
}
void in(int a, int b)
{
    int i;
    for(i=a;i<=b;i++)
    {
        printf("%d:",i);
        coso(i);
        printf("\n");
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    in(b,a);
    else
    in(a,b);
}
