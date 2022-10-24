#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct {
    char name[100];
	float cost;
	int page;
	}sach;
	
main ()
{
	int n,i;
	printf("Nhap so sach: ");
	scanf("%d",&n);
	sach a[n];
	for(i=0;i<n;i++)
	{
		printf("Nhap ten sach:");
		fflush(stdin);
		gets(a[i].name);
		printf("Nhap gia tien:");
		scanf("%f",&a[i].cost);
		printf("Nhap so trang sach:");
		scanf("%d",&a[i].page);
	}
	printf("Cac cuon sach thoa man dieu kien\n");
	for(i=0;i<n;i++)
	{
		if(a[i].cost>100000 && a[i].page<200)
		{
			printf("Ten:");
			puts(a[i].name);
			printf("Gia: %f\n",a[i].cost);
			printf("%d trang\n",a[i].page);
		}
	}
}

