#include<stdio.h>
#include<math.h>
int main()
{
	float s=0,s1=0,s2=0;
	int n,i;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		s=s+pow(-1,i)*1.0/(2*i+1);
	}
	printf("Ket qua la: %f",s);
}
