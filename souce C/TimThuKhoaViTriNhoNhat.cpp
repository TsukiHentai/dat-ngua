#include<stdio.h>
typedef struct 
{
	char t[30];
	int m;
	float d1,d2,d3;
}
sv;
sv a[100];
void nhap(int n)
{
	for(int i=0;i<n;i++)
		scanf("%s%d%f%f%f",a[i].t,&a[i].m,&a[i].d1,&a[i].d2,&a[i].d3);
}
int kt(sv a)
{
	if(a.d1<1 || a.d2<1 || a.d3<1 || a.d1+a.d2+a.d3<15)
		return 0;
	else return 1;
}
int tong(sv a)
{
	return a.d1+a.d2+a.d3;
}
void tk(int n)
{
	int demsothangtruot=0;
	for(int i=0;i<n;i++)
	{
		if(kt(a[i])==0)
			demsothangtruot++;
	}
	if(demsothangtruot==n)
		printf("Khong co ai thi do");
	else
	{
		int vt=-1;
		for(int i=0;i<n;i++)
		{
			if(vt==-1 && kt(a[i])==1)
				vt=i;
			if(kt(a[i])==1 && tong(a[i])>tong(a[vt]))
				vt=i;
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	nhap(n);
	printf("Danh sach sinh vien\n%d\n",n);
	tk(n);
	
}
