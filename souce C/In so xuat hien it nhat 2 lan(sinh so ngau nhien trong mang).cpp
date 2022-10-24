//in so xuat hien it nhat 2 lan(sinh so ngau nhien)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int day[100];
	int i,n;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		day[i]=rand()%10;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",day[i]);
	}
	for(i=0;i<n;i++)
	
}
