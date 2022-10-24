#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int tong=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0) tong=tong+i;
	}
	if(tong==n)	printf("%d la so hoan hao",n);
	else printf("%d khong la so hoan hao",n);
}
