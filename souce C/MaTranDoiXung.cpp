#include<stdio.h>
void nhap(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		scanf("%d",&a[i][j]);
		
}
int kt(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(a[i][j]!=a[j][i])
				return 0;
	return 1;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100][100];
	nhap(a,n,m);
	if(kt(a,n,m)==1)
		printf("Ma tran 1: co doi xung\n");
	else 
		printf("Ma tran 1: khong doi xung\n");
	
	
	
	scanf("%d%d",&n,&m);
	nhap(a,n,m);
	if(kt(a,n,m)==1)
		printf("Ma tran 2: co doi xung\n");
	else 
		printf("Ma tran 2: khong doi xung\n");
}
