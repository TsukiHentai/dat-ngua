#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int x;
	int dem=(2*n-1)+1;
	int tong=0;
	for(int i=0;i<dem;i++)
	{
		tong=(2*i-1)/(pow(x,i));
	}
	printf("Tong=%d",tong);
}
