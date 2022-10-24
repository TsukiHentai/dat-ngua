#include<stdio.h>
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void timx(int a[],int n)
{
	int x;
	scanf("%d",&x);
	int haha=-1;
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		haha=i;
	}
	if(haha==-1)	printf("Khong tim thay x\n");
	else
	printf("Phan tu %d co vi tri: %d",x,haha);
}
void in(int a[],int n)
{
	int b,c;
	scanf("%d%d",&b,&c);
	for(int i=0;i<n;i++)
	{
		if(a[i]>b&&a[i]<c)
		{
			printf("%d ",i);
		}
	}
}
void maxmin(int a[],int n)
{
	int max=a[0];
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	printf("Max la: %d\n",max);
	printf("min la: %d\n",min);
}
void insnt(int a[],int n)
{
	printf("Cac so nt la: ");
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=1;j<=a[i];j++)
		if(a[i]%j==0)
			dem++;
		if(dem==2)	printf("%d ",a[i]);
	}
}
void nhieunhat(int a[],int n)
{
	int demmax=0;
	int so=0;
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			dem++;
		}
		if(dem>demmax)
		{
			demmax=dem;
			so=a[i];
		}
	}
	printf("So co so lan xuat hien nhieu nhat la: %d\n",so);
}
void xoaphantu(int a[],int n)
{
	int k;
	scanf("%d",&k);
	for(int i=k;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	printf("Mang da xoa la: ");
	n--;
	xuat(a,n);
}
void themphantu(int a[],int n)
{
	printf("Nhap z: ");
	int z,x;
	scanf("%d",&z);
	printf("Moi nhap x:");
	scanf("%d",&x);
	for(int i=n;i>z;i--)
	{
		a[i]=a[i-1];
	}
	a[z]=x;
	n++;
	xuat(a,n);
}
void daonguoc(int a[],int n)
{
	for(int i=0;i<n/2;i++)
	{
		int temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
}
void tachmang(int a[],int n)
{
	int b[n];
	int c[n];
	int x=0,y=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==2)
		{
			b[x]=a[i];
			x++;
		}
		else
		{
			c[y]=a[i];
			y++;
		}
	}
	printf("Mang chan la: \n");
	xuat(b,x);
	printf("Mang le la: \n");
	xuat(c,y);
	printf("\n");
}
int max(int a[],int n)
{
	int vt=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[vt])
		vt=i;
	}
	return a[vt];
}
void chenvaosaumax(int a[],int n)
{
	int m=max(a,n);
	int i=0;
	while(i<n)
	{
		if(a[i]==m)
		{
			themphantu(a,n);
			n++;
			i++;
		}
		i++;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n*10];
	nhap(a,n);
	xuat(a,n);
	printf("\n");
	timx(a,n);
	printf("\n");
	in(a,n);
	printf("\n");
	maxmin(a,n);
	printf("\n");
	insnt(a,n);
	printf("\n");
	nhieunhat(a,n);
	printf("\n");
	xoaphantu(a,n);
	printf("\n");
	themphantu(a,n);
	printf("\n");
	daonguoc(a,n);
	printf("\n");
	tachmang(a,n);
	
}
