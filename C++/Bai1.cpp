#include<iostream>
using namespace std;
//typedef struct 
//{
//	int msv;
//}
//SV;
//

class ps
{
	private:
		int ts,ms;
		
	public:
		
		ps()//contructer mac dinh
		{
			ts=0;
			ms=1;
			
		}
		ps(int ts,int ms)//contructer co tham so
		{
			this->ts=ts;		
			this->ms=ms;
		}
//		
//		void inLe()
//		{
//			cout<<this->ts<<"/"<<this->ms<<endl;
//			
//		}
//		void _swap(ps& c);
//		ps operator-(ps b);
//		friend void nhap(ps b[],int n);//ham ban chi co phep cac thuoc tinh private, chu ko phai truy cap chinh
//		ps operator++(int)//posfix hau to//ve xem lai ho minh posfix
//		{
//			ps tmp=*this;
//			++tmp.ts;
//			++tmp.ms;
//			return *this;
//		}
//		friend void in(ps b[],int n);
//		friend void sapxep(ps b[],int n);
//		friend ps operator+(ps a, ps b);
//		friend bool operator >(ps a, ps b);
//		friend bool operator <(ps a, ps b);
//		friend ps operator ++(ps& a);//prefix tien to
//	
//		friend ps operator+(ps a, int b);
//		
//		friend ps operator+(int  a, ps b);
//		
};
//ps operator++(ps& a)//prefix tien to
//{
//	a.ts++;
//	a.ms++;
//	return a;
//}
//
//int UCLN(int a,int b)
//{
//	return (a%b)?UCLN(b,a%b):b;
//}
//int BCNN(int a,int b)
//{
//		return (a*b)/UCLN(a,b);
//}
//bool operator>(ps a, ps b)
//{
// 	int bc=BCNN(a.ms,b.ms);
//	a.ts=a.ts*(bc/a.ms);
//	b.ts=b.ts*(bc/b.ms);
//	a.ms=b.ms=bc;
//	if(a.ts>b.ts)
//		return true;
//	else
//		return false;
//}
//
// 
//bool operator<(ps a, ps b)//a<b thuc su true
//{
// 	int bc=BCNN(a.ms,b.ms);
//	a.ts=a.ts*(bc/a.ms);
//	b.ts=b.ts*(bc/b.ms);
//	a.ms=b.ms=bc;
//	a.inLe();
//	b.inLe();
//	if(a.ts<b.ts)
//		return true;
//	else
//		return false;
//}
//ps ps::operator-(ps b)
//{
//	int bc=BCNN(this->ms,b.ms);
//	this->ts=this->ts*(bc/this->ms);
//	b.ts=b.ts*(bc/b.ms);
//	this->ms=b.ms=bc;
//	ps c;
//	c.ts=this->ts-b.ts;
//	c.ms=this->ms;
//	return c;
//}
//ps operator+ (ps a,ps b)
//{
//	int bc=BCNN(a.ms,b.ms);
//	a.ts=a.ts*(bc/a.ms);
//	b.ts=b.ts*(bc/b.ms);
//	a.ms=b.ms=bc;
//	ps c;
//	c.ts=a.ts+b.ts;
//	c.ms=a.ms;
//	return c;
//}
//void ps::_swap(ps& c)//cach viet ben ngoai thoi
//{
//	
//		int temp=this->ts;
//		this->ts=c.ts;
//		c.ts=temp;
//			
//		temp=this->ms;
//		this->ms=c.ms;
//		c.ms=temp;
//		
//}
//void nhap(ps b[],int n)
//{
//	for (int i=0;i<n;i++)
//	{
//		cout<<"Moi ban nhap phan so thu ["<<i+1<<"]: ";
//		cin>>b[i].ts>>b[i].ms;
//		if(b[i].ms<0)
//		{
//			b[i].ts*=-1;
//			b[i].ms*-1;
//		}
//	}
//}
//void in(ps b[],int n)
//{
//	for (int i=0;i<n;i++)
//	{
//		cout<<"phan so thu ["<<i+1<<"]: ";
//		cout<<b[i].ts<<"/"<<b[i].ms<<endl;
//	}
//}
//void sapxep(ps b[],int n)
//{
//	for (int i=0;i<n;i++)
//	{
//		for (int j=i+1;j<n;j++)
//		{
//			if((float)b[i].ts/b[i].ms>(float)b[j].ts/b[j].ms)
//			{
//				b[i]._swap(b[j]);
//			}
//		}
//	}
//}

int main()
{
//	int n;
//	cin>>n;
//	ps a[n];
//	nhap(a,n);
//	in(a,n);
//	
	ps a(1,2);
//	ps b=a++;
//	a.inLe();
	
	//b.inLe();

	
}

