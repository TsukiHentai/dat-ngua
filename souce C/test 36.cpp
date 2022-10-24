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
float khoangcach(dt b,int xa,int ya)
{
	return sqrt((xa-b.x)*(xa-b.x)+(ya-b.y)*(ya-b.y));
}
void kt(dt a[],int n)
{
	int xa,ya;
	scanf("%d%d",&xa,&ya);
	for(int i=0;i<n;i++)
	{
		if(khoangcach(a[i],xa,ya)==a[i].bk)	printf("Diem (%d, %d) nam tren hinh tron tam (%d, %d) ban kinh %.3f\n",xa,ya,a[i].x,a[i].y,a[i].bk);
		else if(khoangcach(a[i],xa,ya)<a[i].bk)	printf("Diem (%d, %d) nam trong hinh tron tam (%d, %d) ban kinh %.3f\n",xa,ya,a[i].x,a[i].y,a[i].bk);
		else	printf("Diem (%d, %d) nam ngoai hinh tron tam (%d, %d) ban kinh %.3f\n",xa,ya,a[i].x,a[i].y,a[i].bk);
	}
}
int main()
{
	int n;
	dt a[1000];
	scanf("%d",&n);
	nhap(a,n);
	kt(a,n);
}
