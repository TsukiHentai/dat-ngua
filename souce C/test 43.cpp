#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
	{
        if(b==0)	printf("VN");
		else printf("%.3f",(-c/b));
	}
	else
	{
		float d=b*b-4*a*c;
		if(d==0)	printf("%.3f",-b/(2*a));
		else if(d<0)	printf("VN");
		else
		{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("%.3f %.3f",x1,x2);
		}
	}
}
