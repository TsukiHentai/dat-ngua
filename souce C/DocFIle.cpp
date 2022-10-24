//Doc 1 mang n so nguyen tu file mang.dat theo kieu nhi phan
#include "stdio.h"
int main()
{
	FILE *f;
	int a[100],n,i;
	printf("Nhap so phan tu mang:");scanf("%d",&n);
	f=fopen("mang.dat","rb"); //mo file de doc theo kieu nhi phan
	fread(a,sizeof(int),n,f); //Doc n phan tu kieu nguyen cua file vao mang a
	fclose(f);
	printf("Mang vua doc:\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}
