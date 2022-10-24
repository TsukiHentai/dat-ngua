#include<stdio.h>
#include<math.h>
float cv(float a,float b,float c)
{
		return a+b+c;
}
float dt(float a,float b,float c)
{
	float ketqua=sqrt((cv(a,b,c)/2)*((cv(a,b,c)/2)-a)*((cv(a,b,c)/2)-b)*((cv(a,b,c)/2)-c));
	return ketqua;
}
int main()
{
	float a1,b1,c1;
	float a2,b2,c2;
	scanf("%f %f %f",&a1,&b1,&c1);
	scanf("%f %f %f",&a2,&b2,&c2);
	if(a1<=0||b1<=0||c1<=0)
	{
		cv(a1,b1,c1)==-1;
		dt(a1,b1,c1)==-1;
	}
	else
	if(a2<=0||b2<=0||c2<=0)
	{
		cv(a2,b2,c2)==-1;
		dt(a2,b2,c2)==-1;
	}
	else
	if(dt(a1,b1,c1)>dt(a2,b2,c2))	printf("%.3f %.3f",cv(a1,b1,c1),dt(a2,b2,c2));
	else printf("%.3f %.3f",cv(a2,b2,c2),dt(a1,b1,c1));
}

