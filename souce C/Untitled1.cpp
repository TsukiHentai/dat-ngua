#include<stdio.h>
int main()
{
	long a,b,c;
	a=12345678987654321;
	b=12;
	c=a-(a%b);
	printf("C= %d",c);
}
