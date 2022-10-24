#include<stdio.h>
#include<math.h>
void ptb1(float a,float b)
{//ax+b=0
	if(a==0)
	{
		if(b==0)
		{
			printf("VSN");
		}
		else printf("VN");
	}
	else
		printf("%.3f",-b/a);
}
void ptb2(float a,float b,float c)
{
	if(a==0)
	{
		ptb1(b,c);
	}
	else
	{
		float d=b*b-4*a*c;
		float x1,x2;
		if(d==0)	printf("%.3f",-b/(a*2));
		else if(d<0)	printf("VN");
		else
		{
			x1=(-b-sqrt(d))/(2*a);
			x2=(-b+sqrt(d))/(2*a);
			if(x1<x2)	printf("%.3f %.3f",x1,x2);
			else	printf("%.3f %.3f",x2,x1);
		}
	}
}
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	ptb2(a,b,c);
}
