#include<stdio.h>
#include<math.h>
int ucln(int a,int b)
{
    return (a%b)?ucln(b,a%b):b;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(y<=0||x<=0)
        printf("Du lieu sai");
    else 
        printf("Uoc so chun lon nhat cua %d va %d la %d\n",x,y,ucln(x,y));
   }
