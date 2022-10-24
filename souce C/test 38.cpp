#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
	char matkhau[100];
}mk;
void nhap(mk a)
{
	fflush(stdin);
	scanf("%s",a.matkhau);
}
void check(mk c[])
{
	char b[10]={1,2,3,4,5,6};
	int dem=0;
	for(int i=0;i<4;i++)
	{
		dem++;
		if(strcmp(c[i],b)==0)
		{
			printf("Dang nhap thanh cong, %d",dem);
			break;
		}
	}
	if(dem==5)	printf("Tai khoan bi khoa, %d",dem);
}
int main()
{
	mk a[1000];
	nhap(a);
	check;
}
