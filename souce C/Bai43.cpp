//Bai so 43
#include "stdio.h"
typedef struct
{
	char ten[50];
	int sotrang;
	float giatien;
}sach;
int main()
{
	sach s[100];
	int i,n;
	FILE *f;
	printf("Nhap so luong sach:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("Nhap cuon sach %d:\n",i+1);
			printf("Ten sach:");
			fflush(stdin);
			gets(s[i].ten);
			printf("So trang:");
			scanf("%d",&s[i].sotrang);
			printf("Gia tien:");
			scanf("%f",&s[i].giatien);
		}
	printf("Cac sach vua nhap:\n");
	f=fopen("ketqua.txt","wt");
	for(i=0;i<n;i++)
		{
			printf("Ten: %s, so trang: %d, gia tien: %.1f\n",s[i].ten,s[i].sotrang,s[i].giatien);
			fprintf(f,"Ten: %s, so trang: %d, gia tien: %.1f\n",s[i].ten,s[i].sotrang,s[i].giatien);
	}
}
