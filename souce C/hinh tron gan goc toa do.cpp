#include<stdio.h>
#include<math.h>
typedef struct
{
	int ma;
	float bk;
	int x;
	int y;
}dt;
void nhap(dt a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i].ma);
		scanf("%f",&a[i].bk);
		scanf("%d",&a[i].x);
		scanf("%d",&a[i].y);
	}
}
float kc(dt a)
{
	return sqrt(a.x*a.x+a.y*a.y);
}
void gan(dt a[],int n)
{
	float min=kc(a[0]);
	int vitri;
	for(int i=0;i<n;i++)
	{
		if(kc(a[i])<min)
		{
			min=kc(a[i]);
			vitri=i;
		}
	}
	printf("%d %d %d %.3f",a[vitri].ma,a[vitri].x,a[vitri].y,a[vitri].bk);
}
int main()
{
	int n;
	dt a[1000];
	scanf("%d",&n);
	nhap(a,n);
	gan(a,n);
}
