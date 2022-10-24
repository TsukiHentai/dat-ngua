#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int dem=0;
	for(i=0;i<5;i++)
	{
	char s[30];
	scanf("%s",s);
	dem++;
	if(strcmp(s,"apple")==0)
	{
		printf("Dang nhap thanh cong, %d",dem);
		break;
	}
	else if(dem==5) printf("Tai khoan bi khoa, %d",dem);
	}
	
}
