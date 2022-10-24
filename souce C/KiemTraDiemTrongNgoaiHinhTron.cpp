#include <stdio.h>
#include <math.h>
typedef struct
{
	int m;
	float r;
	int x;
	int y; 
}
ht;
void nhap(ht a[], int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i].m);
		scanf("%f",&a[i].r);
		scanf("%d",&a[i].x);
		scanf("%d",&a[i].y);
	}
}
void xuat(ht a[], int n, int xa, int ya)
{
	for(int i=0;i<n;i++)
	{
		float s=sqrt((xa-a[i].x)*(xa-a[i].x)+(ya-a[i].y)*(ya-a[i].y));
		if(a[i].r<s)
		{
			printf("Diem (%d, %d) nam ngoai hinh tron tam (%d, %d) ban kinh %.3f\n",xa,ya,a[i].x,a[i].y,a[i].r);
		}
		if(a[i].r==s)
		{
			printf("Diem (%d, %d) nam tren hinh tron tam (%d, %d) ban kinh %.3f\n",xa,ya,a[i].x,a[i].y,a[i].r);
		}
		if(a[i].r>s)
		{
			printf("Diem (%d, %d) nam trong hinh tron tam (%d, %d) ban kinh %.3f\n",xa,ya,a[i].x,a[i].y,a[i].r);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	ht a[n];
	nhap(a,n);
	int xa,ya;
	scanf("%d%d",&xa,&ya);
	xuat(a,n,xa,ya);
    return 0;
}


