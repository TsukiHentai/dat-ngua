//Dem so luong uoc cua so nguyen n
#include<stdio.h>
main()
{
	int n,i,dem=1;
	do
	{
		printf("Nhap vao so n: ",n);
		scanf("%d",&n);	
	}while(n<0);
	for(i=1;i<=0;i++)
	{
		if(n%i==0);
		{
			dem++;
		}

	}
	printf("%d",dem);
}
