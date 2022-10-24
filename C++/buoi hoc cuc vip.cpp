#include<stdio.h>
void sxdoicho(int a[],int n)// tu be den lon
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}		
		}
	}
}
void sxchon(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int vtmin=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[vtmin]>a[j])
			{
				vtmin=j;
			}
		}
		int temp=a[i];
		a[i]=a[vtmin];
		a[vtmin]=temp;
	}
}
void sxchen(int a[], int n){
	for(int i=1;i<n;i++)
	{
		int temp = a[i];
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(temp<a[j]){
				a[j+1] = a[j];
			}
			else
				break;
		}
		a[j+1]=temp;	
	}
}
void sxnoibot(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void sxnoibotb1(int a[],int n)
{//    {2,17,3,1,9,3,2}
	for(int i=0;i<n-2;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
//void Sapxep(int a[], int n)
//{
//	int i, j;
//	for (int i = 0; i<n - 2;i++)
//		for (int j = n - 1; j>i; j--)
//			if (a[j] < a[j - 1])
//				swap(a[j], a[j - 1]);
//}
int main()
{
	int a[]={2,17,3,1,9,3,2};
	int b[]={2,17,3,1,9,3,2};
	int c[]={2,17,3,1,9,3,2};
	int d[]={2,17,3,1,9,3,2};
	int e[]={2,17,3,1,9,3,2};
	sxchon(a,6);
	int i;
	printf("Sap xem doi cho truc tiep:\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	sxchon(b,6);
	printf("\nSap xep chon:\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",b[i]);
	}
	sxchen(c,6);
	printf("\nSap xep chen:\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",c[i]);
	}
	sxnoibot(d,6);
	printf("\nSap xep noi bot:\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",d[i]);
	}
	sxnoibotb1(e,6);
	printf("\nSap xep noi bot b1:\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",e[i]);
	}
}
