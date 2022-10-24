#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,x3;
	float y1,y2,y3;
	float a,b,c;
	printf("Nhap vao toa do diem thu nhat: ");
	scanf("%f%f",&x1,&y1);
	printf("Nhap vao toa do diem thu hai: ");
	scanf("%f%f",&x2,&y2);
	printf("Nhap vao toa do diem thu ba: ");
	scanf("%f%f",&x3,&y3);
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	if(a+b>c&&a+c>b&&b+c>a)	printf("3 dinh la tam giac");
	else	printf("3 dinh khong la tam giac");
}
