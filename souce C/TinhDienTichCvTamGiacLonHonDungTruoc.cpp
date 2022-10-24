#include <stdio.h>
#include <math.h>

float dt(float a,float b,float c)
{
    if(a+b>c && a+c>b && b+c>a)
    {
        float p=(a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    return -1;
}
float cv(float a,float b,float c)
{
    if(a+b>c && a+c>b && b+c>a)
    {
        return a+b+c;
    }
    return -1;
}
int main(){

    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float dt1=dt(a,b,c);

    float a1,b1,c1;
    scanf("%f%f%f",&a1,&b1,&c1);
     float dt2=dt(a1,b1,c1);
     if(dt1>dt2)
        printf("%.3f %.3f\n%.3f %.3f",cv(a,b,c),dt(a,b,c),cv(a1,b1,c1),dt(a1,b1,c1));
    else
        printf("%.3f %.3f\n%.3f %.3f",cv(a1,b1,c1),dt(a1,b1,c1),cv(a,b,c),dt(a,b,c));
}
