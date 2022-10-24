//Liet ke uoc cua 1 so n
#include<stdio.h>
main()
{
	int n,i;
	printf("Nhap vao so can tim uoc: ",n);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d	",i);
		}
	}
}
