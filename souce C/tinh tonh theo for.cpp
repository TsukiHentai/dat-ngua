#include<stdio.h>
int  main()
{
	int gt=1,i,n=1;
	float s=1,a;
	printf("Nhap vao a:");
	scanf("%f",&a);

	while(1/(float)(2*n+1)>=a)
	{
		gt=gt*(2*n)*(2*n+1);
		s=s+1.0/gt;
		n++;
	}
	printf("Tong: %.3f",s);
}
