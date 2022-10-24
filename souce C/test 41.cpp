#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char ten[100];
	int sbd;
	float d1;
	float d2;
	float d3;
}sv;
void nhap(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%s",a[i].ten);
		scanf("%d",&a[i].sbd);
		scanf("%f",&a[i].d1);
		scanf("%f",&a[i].d2);
		scanf("%f",&a[i].d3);
	}
}
int lala(sv a)
{
	if((a.d1+a.d2+a.d3>=15)&&a.d1>=1&&a.d2>=1&&a.d3>=1)
	return 1;
	else return 0;
}
void kt(sv a[],int n)
{
	int bla=0;
	int vitri=0;
	float max=a[n-1].d1+a[n-1].d2+a[n-1].d3;
	for(int i=n-2;i>=0;i--)
	{
		if(lala(a[i])==1)
		{
			if(max<=(a[i].d1+a[i].d2+a[i].d3))
			{
				max=a[i].d1+a[i].d2+a[i].d3;
				vitri=i;
				bla++;
			}
		}
	}
	if(bla>0){
	printf("So thu tu cua thu khoa: %d\n",vitri);
	printf("%s %d %.2f %.2f %.2f %.2f",a[vitri].ten,a[vitri].sbd,a[vitri].d1,a[vitri].d2,a[vitri].d3,(a[vitri].d1+a[vitri].d2+a[vitri].d3));
	}
	else printf("Khong co ai thi do");
}
int main()
{
	int n;
	sv a[100];
	scanf("%d",&n);
	nhap(a,n);
	kt(a,n);
}
