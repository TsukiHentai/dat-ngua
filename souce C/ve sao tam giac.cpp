#include<stdio.h>
#include<stdlib.h>
void xuoi(int n)
{
	int i,j;
	int temp=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=temp;j++)
		printf(" ",j);
		for(j=1;j<=2*i-1;j++)
		printf("*",j);
		temp--;
		printf("\n");
	}
}
void nguoc(int n)
{
	int i,j;
int temp=0;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=temp;j++)
		printf(" ",j);
		for(j=1;j<=2*i-1;j++)
		printf("*",j);
		temp++;
		printf("\n");
	}	
}
int main()
{
	int n,m,l;
	scanf("%d %d %d",&n,&m,&l);
	printf("%d\n",n);
	if(n>0) xuoi(n);
	else nguoc(abs(n));
	printf("%d\n",m);
	if(m>0) xuoi(m);
	else nguoc(abs(m));
	printf("%d\n",l);
	if(l>0) xuoi(l);
	else nguoc(abs(l));
}
