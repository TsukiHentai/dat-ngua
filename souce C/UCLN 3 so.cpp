#include<stdio.h>
int UCLN(int a, int b)
{
	while (a!=b)
        if (a>b)
            a=a-b;
        else
            b=b-a;
    return a;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a<=0 || b<=0 || c<=0)
	{
		printf("DL sai.");
	}
	else
	{
		printf("%d",UCLN(UCLN(a,b),c));
	}
}
