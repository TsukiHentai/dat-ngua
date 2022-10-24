//Tinh 1 x 2 x 3 x ... x n
#include<stdio.h>
main()
{
	int n,s=1,i;
		printf("Nhap vao n: ",n);
		scanf("%d",&n);
		if(n==0) 
			printf("Tich bang: 0");
		else{
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("Tich bang: %d",s);
	}
}
