#include<stdio.h>
void readdata(int a[],int n)
{
	int i;
		//Nhap mang
	printf("Nhap cac phan tu cua mang:\n");
	for(i=0;i<n;i++)
		{
			printf("Nhap a[%d]=",i);
			scanf("%d",&a[i]);
		}
}
void writedate(int a[],int n)
{
	int i;
	//In mang
	printf("Mang vua nhap:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
int timmax(int a[], int n)
{
	int max=a[0],i;
	for(i=1;i<n;i++)
		if(max<a[i]) max=a[i];
	return max;
}

int main()
{
	int a[100],n,i,tong,max,j,tg;
	//Nhap do dai thuc te cua mang
	printf("Nhap do dai mang: ",n);
	scanf("%d",&n);
	//Nhap mang
	readdata(a,n);
	writedate(a,n);
	//Tinh tong mang
	tong=0;
	for(i=0;i<n;i++)
		tong=tong+a[i];
	printf("\nTong mang=%d",tong);
	int max=timmax(a,n);
	printf("Max cua mang la: %d",max);
	//Sap xep tang dan
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
				{
					tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
	printf("\nSap xep mang: \n");
	for(i=0;i<n;i++)
		printf("%d	",a[i]);
}
