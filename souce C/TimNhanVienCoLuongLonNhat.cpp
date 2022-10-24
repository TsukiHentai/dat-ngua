#include<stdio.h>
typedef struct 
{
	char t[30];
	int m;
float hsl;
int l;
}
sv;
sv a[100];
void nhap(int n)
{
	for(int i=0;i<n;i++)
		scanf("%s%d%f%d",a[i].t,&a[i].m,&a[i].hsl,&a[i].l);
}

float tong(sv a)
{
	return a.hsl*2000000+a.l;
}
void tk(int n)
{
	int vt=0;
	for(int i=1;i<n;i++)
	{
		if(tong(a[i])>tong(a[vt]))
			vt=i;
	}
	printf("Nhan vien co luong lon nhat\n");
	printf("%s %d %.2f %d %.2f",a[vt].t,a[vt].m,a[vt].hsl,a[vt].l,tong(a[vt]));
}
int main()
{
	int n;
	scanf("%d",&n);
	nhap(n);
	
	tk(n);
	
}
