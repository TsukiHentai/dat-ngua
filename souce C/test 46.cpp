#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,x3;
	float y1,y2,y3;
	float d1,d2,d3;
	scanf("%f%f",&x1,&y1);
	scanf("%f%f",&x2,&y2);
	scanf("%f%f",&x3,&y3);
	d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	d2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	d3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	if(d1+d2==d3||d1+d3==d2||d2+d3==d1)
	printf("YES");
	else	printf("NO");
}
