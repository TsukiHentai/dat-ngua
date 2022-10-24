#include<stdio.h>
#include<string.h>

int main()
{
	char a[1000];
	int dem=0;
	for(int i=0;i<5;i++)
	{
	scanf("%s",&a);
	dem++;
	if(strcmp(a,"123456a@B")==0)
	{
		printf("Dang nhap thanh cong, %d",dem);
		break;
	}
	else if(dem==5) printf("Tai khoan bi khoa %d",dem);
	}

}
