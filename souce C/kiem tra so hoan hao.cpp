#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
		{
			if(n%i==0) c=c+i;
		}
if(c==n) printf("%d la so hoan hao",n);
else printf("%d khong la so hoan hao",n);
}
