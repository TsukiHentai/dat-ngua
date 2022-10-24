//Doc du lieu tu file input.txt cho vao mang a, sap xep giam dan va 
//ghi ket qua ra file output.txt
#include "stdio.h"
int main()
{
	int a[100],n,i,j,tg;
	FILE *f;
	f=fopen("input.txt","rt");
	fscanf(f,"%d",&n);
	for(i=0;i<n;i++)
		fscanf(f,"%d",&a[i]);
	fclose(f);
	printf("Mang vua doc:\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]<a[j])
				{
					tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
	f=fopen("output.txt","wt");
	for(i=0;i<n;i++)
		fprintf(f,"%d  ",a[i]);
	fclose(f);
}

