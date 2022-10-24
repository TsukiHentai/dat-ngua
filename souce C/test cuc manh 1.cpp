#include<stdio.h>
typedef struct 
{
	char ten[30];
	int masv;
	float dm1;
	float dm2;
	float dm3; 
}SV;
void nhap(SV a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %f %f %f",a[i].ten,&a[i].masv,&a[i].dm1,&a[i].dm2,&a[i].dm3);
	}
}
void in(SV a[],int n)
{
	float tongdiem;
	float max;
	int temp;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		tongdiem=a[i].dm1+a[i].dm2+a[i].dm3;
		if(a[i].dm1>=1&&a[i].dm2>=1&&a[i].dm3>=1)
		{
			if(tongdiem>=15)
			if(tongdiem>max)
			{
				temp=i;
				max=tongdiem;
				dem=1;
			}
		}
	}
	if(dem==1)
	{
	printf("So thu tu cua thu khoa: %d\n",temp);
	printf("%s %d %.2f %.2f %.2f %.2f",a[temp].ten,a[temp].masv,a[temp].dm1,a[temp].dm2,a[temp].dm3,max);
	}else
	printf("Khong co ai thi do");
}
int main()
{
	int n;
	scanf("%d",&n);
	SV a[100];
	nhap(a,n);
	in(a,n);
}
