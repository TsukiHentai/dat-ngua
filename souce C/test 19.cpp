#include<stdio.h>
#include<math.h>
float ptb1(float a,float b)
{
	if(a==0)
	{
		if(b==0)
			printf("VSN");
		else printf("VN");
	}
}
float ptb2(float a,float b,float c)
{
	float d,x1,x2;
	if(a==0)
	{
		ptb1(b,c);
	}
	else
	{
		float d=b*b-4*a*c;
		if(d<0)	printf("VN");
		else
		{
			if(d==0)
			{
				x1=x2=-b/(2*a);
				printf("Nghiem la: %f",x1);
			}
			else
			{
				x1=(-b-sqrt(d))/(2*a);
				x2=(-b+sqrt(d))/(2*a);
				printf("2 nghiem phan biet la: %f %f",x1,x2);
			}
		}
	}
}
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	ptb2(a,b,c);
}
