#include<stdio.h>

typedef struct
{
	char t[30];
	int m;
	float d1,d2,d3;
}SV;

void nhap(SV a[], int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%s%d%f%f%f", &a[i].t,&a[i].m,&a[i].d1,&a[i].d2,&a[i].d3);
	}
}

void sx(SV a[], int n)
{
	int count = 0;
	printf("Danh sach sinh vien hoc lai\n");
	for(int i=0;i<n;i++)
	{
		if(a[i].d1 < 4 || a[i].d2 < 4 || a[i].d3 < 4 || (a[i].d1 + a[i].d2 + a[i].d3)/3 < 4)
		{
			count++;
			printf("%d %s %.2f %.2f %.2f %.2f\n", a[i].m, a[i].t, a[i].d1, a[i].d2, a[i].d3, (a[i].d1 + a[i].d2 + a[i].d3)/3);
		}
	}
	printf("So sinh vien phai hoc lai: %d", count);
}

int main()
{
	SV a[200];
	int n;
	scanf("%d", &n);
	while(n>=1 && n <= 200)
	{
		nhap(a,n);
		sx(a,n);	
	}	
}
