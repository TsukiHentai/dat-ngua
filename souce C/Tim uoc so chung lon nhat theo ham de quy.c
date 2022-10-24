#include<stdio.h>
int uscln(int a, int b)
{
	if(a==b) return a;
	else 
	{
		if(a>b) return(uscln(a-b,b));
		else return (uscln(a,b-a));
	}
}
main(){
	int a,b;
	printf("Nhap a,b: ");
	scanf("%d%d",&a,&b);
	printf("Uscln cua a,b=%d",uscln(a,b));
}
