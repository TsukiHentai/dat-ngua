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

void tk(int n)
{
	printf("Danh sach sinh vien hoc lai\n");
	int demsv=0;
	for(int i=0;i<n;i++)
	{
		int dem=0;
		if(a[i].d1<4)
		    dem++;
		if(a[i].d2<4)
		    dem++;
		if(a[i].d3<4)
		    dem++;
		if(dem>=2)
		{
		    printf("%s %d %.2f %.2f %.2f %.2f\n",a[i].t,a[i].m,a[i].d1,a[i].d2,a[i].d3,(a[i].d1+a[i].d2+a[i].d3)/3);
		    demsv++;
		}
	}
	printf("So sv phai hoc lai: %d",demsv);
	
}
int main()
{
	int n;
	scanf("%d",&n);
	nhap(n);
	
	tk(n);
	
}
