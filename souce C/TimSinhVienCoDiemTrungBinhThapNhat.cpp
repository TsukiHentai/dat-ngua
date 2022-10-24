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

float tong(sv a)
{
	return (a.d1+a.d2+a.d3)/3;
}
void tk(int n)
{
	int vt=0;
	for(int i=1;i<n;i++)
	{
		if(tong(a[i])<tong(a[vt]))
			vt=i;
	}
	printf("So thu tu cua sv: %d\n",vt);
	printf("%s %d %.2f %.2f %.2f %.2f\n",a[vt].t,a[vt].m,a[vt].d1,a[vt].d2,a[vt].d3,(a[vt].d1+a[vt].d2+a[vt].d3)/3);
}
int main()
{
	int n;
	scanf("%d",&n);
	nhap(n);
	
	tk(n);
	
}
