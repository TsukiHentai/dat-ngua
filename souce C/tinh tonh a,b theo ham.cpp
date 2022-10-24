//tinh phuong trinh bac 1 theo ham
#include<stdio.h>
#include<math.h>
void PTB1(int n, int m)
{
	if(n==0){
		if(m==0)	printf("Vo nghiem");
		else	printf("VSN");
	}
	else printf("%f",(float)-m/n);
}
void PTB2(int n,int m,int c)
{
	if(n==0)
	PTB1(m,c);
	else
	{
	int delta;
	float x1,x2;
	delta=m*m-4*n*c;
	if(delta<0)	
		printf("PTVN");
	else if(delta==0) 
		printf("PT co nghiem kep x1=x2= %f",(float)-m/(2*n));
		else
		{
			x1=(-m+sqrt(delta))/(2*n);
			x2=(-m-sqrt(delta))/(2*n);
			printf("X1= %f",x1);
			printf("X2= %f",x2);
		}
	}
}
int main()
{
	int a,b,c;
	printf("Nhap vap a,b,c: ");
	scanf("%d%d%c",&a,&b,&c);
	PTB1(a,b);
	PTB2(a,b,c);
}
