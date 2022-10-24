#include <stdio.h>


void _10To2(int n)
{
    if(n<=0)
        return;
    _10To2(n/2);
    printf("%d ",n%2);
}
void In(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        printf("%d: ",i);
        _10To2(i);
        printf("\n");
    }
}

int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
        In(a,b);
    else 
        In(b,a);

}
