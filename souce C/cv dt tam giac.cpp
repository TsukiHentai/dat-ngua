#include<stdio.h>
#include<math.h>
float cv(float a, float b, float c)
{
	return a+b+c;
}
float dt(float a, float b, float c)
{
	float kq=0,p=cv(a,b,c)/2;
	kq=sqrt(p*(p-a)*(p-b)*(p-c));
	return kq;
}
int main()
{
	float cv1=0,cv2=0,dt1=0,dt2=0;
	float a1,b1,c1;
	float a2,b2,c2;
	scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	if(a1+b1<=c1||a1+c1<=b1||c1+b1<=a1)
	{
		cv1=-1.000;
		dt1=-1.000;
	}
	else
	{
		cv1=(float)cv(a1,b1,c1);
		dt1=(float)dt(a1,b1,c1);
	}
	if(a2+b2<=c2||a2+c2<=b2||c2+b2<=a2)
	{
		cv2=-1.000;
		dt2=-1.000;
	}
	else
	{
		cv2=(float)cv(a2,b2,c2);
		dt2=(float)dt(a2,b2,c2);
	}
	if(dt1>dt2)	
	{
		printf("%.3f %.3f\n",cv1,dt1);
		printf("%.3f %.3f\n",cv2,dt2);
	}
	else
	{
		printf("%.3f %.3f\n",cv2,dt2);
		printf("%.3f %.3f\n",cv1,dt1);
	}
}

