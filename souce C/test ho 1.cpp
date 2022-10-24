#include<stdio.h>
#include<math.h>
void ptb1(float a, float b) 
{
	if(a==0) {
		if(b==0)
			printf("VSN");
		else
			printf("VN");
		}
	else
		printf("%f",-b/a);
}

void ptb2(float a, float b, float c) {
	float x1=0,x2=0,delta=0;
	if(a==0) {
		ptb1(b,c);
	}
	else {
	delta=b*b-4*a*c;
	if(delta<0)
		printf("VN");
	else if(delta==0) {
		x1=x2=-b/(2*a);
		printf("%.3f",x1);
	}
	else {
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
		if(x1<x2)
			printf("%.3f %.3f",x1,x2);
		else
			printf("%.3f %.3f",x2,x1);
		}
	}
}
int main() {
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	ptb2(a,b,c);
}
