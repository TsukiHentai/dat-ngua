#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct
{
	char Tensach[20];
	int Sotrang;
	float Giatien;
}sach;
main ()
{
	int n,i;
	printf("Nhap so sach: ");
	scanf("%d",&n);
	sach a[n];
	for(i=0;i<n;i++)
	{
		printf("Ten sach:");
		fflush(stdin);
		gets(a[i].Tensach);
		printf("So trang sach: ");
		scanf("%d",a[i].Sotrang);
		printf("Gia tien: ");
		scanf("%f",a[i].Giatien);
	}
	printf("Nhung cuon sach thoa man de bai la: ");
	for(i=0;i<n;i++)
	{
		if(a[i].Giatien<100000 && a[i].Sotrang<200)
		{
			printf("Ten sach: ");
			puts(a[i].Tensach);
			printf("So trang: ",a[i].Sotrang);
			printf("Gia tien: ",a[i].Giatien);
		}
	}
}
