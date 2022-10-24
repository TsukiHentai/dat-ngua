#include <stdio.h>
int main()
{
float a1,b1,c1;
float a2,b2,c2;
float x=0,y=0,d=0,dx=0,dy=0;
scanf("%f %f %f",&a1,&b1,&c1);
scanf("%f %f %f",&a2,&b2,&c2);
d=a1*b2-a2*b1;
dx=c1*b2-c2*b1;
dy=a1*c2-a2*c1;
if(d==0)
{
    if(dx+dy==0)  printf("VSN");
    else printf("VN");
}
else
    x=dx/d;
    y=dy/d;
    printf("%.5f %.5f",x,y);
}
