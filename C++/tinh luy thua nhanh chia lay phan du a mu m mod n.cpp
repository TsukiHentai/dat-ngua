#include<iostream>
long modexp(long a, long x, long n)
{
	long r=1;
	while (x > 0)
	{
		if(x%2==1)
		r=(r*a)%n;
		a=(a*a)%n;
		x/=2;
	}
	return r;
}
int main()
{
	int a,b,c;
	printf("Moi nhap so theo dang: a mu b mod c: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Ket qua la: %li",modexp(a,b,c));
}

