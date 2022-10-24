#include<stdio.h>
typedef struct{
	char ten[100];
	int msv;
	float toan,triet,ltc;
}SV;
void nhap(SV a[],int n){
	for(int i=0;i<n;i++){
		scanf("%s%d%f%f%f",&a[i].ten,&a[i].msv,&a[i].toan,&a[i].triet,&a[i].ltc);
	}
}
void hoclai(SV a[], int n){
	int dem=0;
	printf("Danh sach sinh vien hoc lai\n");
	for(int i=0;i<n;i++){
		if((a[i].toan<4 && a[i].triet<4) || (a[i].toan<4 && a[i].ltc<4) || (a[i].triet<4 && a[i].ltc<4)){
			dem++;
		printf("%d %s %.2f %.2f %.2f %.2f\n",a[i].msv,a[i].ten,a[i].toan,a[i].triet,a[i].ltc,(a[i].toan+a[i].triet+a[i].ltc)/3);	
		}
	}
	printf("Danh sach nay co %d sinh vien phai hoc lai",dem);
}
int main(){
	int n;
	scanf("%d",&n);
	SV a[100];
	nhap(a,n);
	hoclai(a,n);
}
