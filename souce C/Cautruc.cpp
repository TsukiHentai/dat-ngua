#include "stdio.h"
typedef struct {
	char hoten[30];
	int masv;
	float toan,ly,hoa,tb;
}sinhvien;
int main()
{
	sinhvien sv[100],tg;
	int n,i,j;
	printf("Nhap so sinh vien:");
	scanf("%d",&n);
	printf("Nhap danh sach sinh vien:\n");
	for(i=0;i<n;i++)
		{
			printf("Nhap sinh vien thu %d\n",i+1);
			printf("Ho ten:");
			fflush(stdin);//Xoa bo dem ban phim
			gets(sv[i].hoten);
			printf("Ma sinh vien:");
			scanf("%d",&sv[i].masv);
			printf("Nhap diem toan, ly, hoa:");
			scanf("%f%f%f",&sv[i].toan,&sv[i].ly,&sv[i].hoa);
			}	
	printf("Danh sach sinh vien vua nhap:\n");
	for(i=0;i<n;i++)
		printf("Ma sv:%d, ho ten:%s, diem toan: %.2f, diem ly: %.2f, diem hoa: %.2f\n",sv[i].masv,sv[i].hoten,sv[i].toan,sv[i].ly,sv[i].hoa);
	for(i=0;i<n;i++) //Tinh diem trung binh
		sv[i].tb=(sv[i].toan+sv[i].ly+sv[i].hoa)/3;
	for(i=0;i<n;i++) //Sap xep giam dan theo diem trung binh
		for(j=i+1;j<n;j++)
			if(sv[i].tb<sv[j].tb)
				{
					tg=sv[i];
					sv[i]=sv[j];
					sv[j]=tg;
				}
	printf("Danh sach sinh vien sap xep giam dan theo diem tb:\n");
	for(i=0;i<n;i++)
		printf("Ma sv:%d, ho ten:%s, diem tb: %.2f\n",sv[i].masv,sv[i].hoten,sv[i].tb);
				
}
