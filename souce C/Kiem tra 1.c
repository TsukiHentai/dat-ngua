#include "stdio.h"
#include "conio.h"
int main()
{
	//tao mang
	int a[100][100];
	int i,j,n,m;
	printf("Nhap so hang, so cot:");
	scanf("%d%d",&n,&m);
	//nhap mang
	printf("Nhap cac phan tu cua mang:\n");
	for(i=0; i<n ;i++)
         for(j=0; j<m ;j++)
		     {
			 printf("a[%d][%d]=",i,j);
			 scanf("%d",&a[i][j]);
			 }	
	// in mang
	printf("Mang vua nhap la: \n");
	for(i=0;i<n;i++)
	        {
	     for(j=0; j<m ;j++)
	         
	         	printf("%d ",a[i][j]);
	         	printf("\n");
	    }
	
    //tim hang co tong lon nhat
   	int tong, max=0;
	for(i=0;i<n;i++)
	{
		tong=0;
		for(j=0;j<m;j++)
		{
		tong+=a[i][j];
		}
		if(max<tong) max=tong;
		}
    printf("tong lon =%d",max);
    }
