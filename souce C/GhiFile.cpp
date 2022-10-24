//Ghi 1 mang n so nguyen vao file theo kieu nhi phan
#include "stdio.h"
int main()
{
	FILE *f;
	int a[100],n,i;
	printf("Nhap so phan tu mang:");scanf("%d",&n);
	printf("Nhap cac phan tu mang:\n");
	for(i=0;i<n;i++)
		{
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
	f=fopen("mang.dat","wb"); //mo file de ghi theo kieu nhi phan
	fwrite(a,sizeof(int),n,f); //ghi n phan tu kieu nguyen cua mang a vao file
	fclose(f);
}
