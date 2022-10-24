#include<iostream>
#include<cmath>
using namespace std;
class shape
{
	private:	
		string name;
	public:
		
		shape()
		{
			
		}
		void setName(string name)
		{
			this->name=name;
		}
		string getName()
		{
			return this->name;
		}
		virtual void nhap()
		{
		}
		virtual float ChuVi()
		{
			return 0;
		}
		virtual float DienTich()
		{
			return 0;
		}
		virtual void self_in()
		{
			
		}
		
		void in()
		{
			cout<<"Ten cua hinh: "<<name<<" ";
			self_in();
			cout<<endl<<"Chu vi cua hinh: "<<ChuVi()<<" ";
			cout<<endl<<"Dien tich cua hinh: "<<DienTich()<<" ";
			cout<<endl;
			cout<<endl;
		}
};
class triangle:public shape
{
	private:
		float a,b,c;
	public:
		
		triangle():shape()
		{
			setName("triangle");
		}
		//get - set
		void setA(float a)
		{
			this->a=a;
		}
		float  getA()
		{
			return a;
		}
		void setB(float b)
		{
			this->b=b;
		}
		float  getB()
		{
			return b;
		}
		void setC(float c)
		{
			this->c=c;
		}
		float  getC()
		{
			return c;
		}
		//end get set
		void self_in()
		{
			cout<<"GT 3 canh la "<<a<<"/"<<b<<"/"<<c<<" ";
		}
		float ChuVi()
		{
			return a+b+c;
		}
		float DienTich()
		{
			float p=(a+b+c)/2;
			
			return sqrt(p*(p-a)*(p-b)*(p-c)); 
		}
		void nhap()
		{
			cout<<"Moi ban nhap 3 canh a/b/c: ";
			cin>>a>>b>>c;
			
		}
	

		
};
class rectangle:public shape
{
	private:
		float a,b;
	public:
		
		rectangle():shape()
		{
			setName("rectangle");
		}
		//get - set
		void setA(float a)
		{
			this->a=a;
		}
		float  getA()
		{
			return a;
		}
		void setB(float b)
		{
			this->b=b;
		}
		float  getB()
		{
			return b;
		}
		float ChuVi()
		{
			return (a+b)*2;
		}
		float DienTich()
		{
			return a*b;
		}
		//end get set
		void self_in()
		{
			cout<<"GT 2 canh la "<<a<<"/"<<b<<" ";
		}
		void nhap()
		{
			cout<<"Moi ban nhap 2 canh : ";
			cin>>a>>b;
			
		}
		
};
class circle:public shape
{
	private:
		float r;
	public:
		
		circle():shape()
		{
			setName("circle");
		}
		//get - set
		void setR(float r)
		{
			this->r=r;
		}
		float  getR()
		{
			return r;
		}
		float ChuVi()
		{
			return 2*r*3.14;
		}
		float DienTich()
		{
			return r*r*3.14;
		}
		//end get set
		void self_in()
		{
			cout<<"GT ban kinh la: "<<r<<" ";
		}
		void nhap()
		{
			cout<<"Moi ban nhap ban kinh : ";
			cin>>r;
			
		}
		
};
int main()
{
	int n;
	cout<<"Moi ban nhap so hinh muon nhap: ";
	cin>>n;
	shape **arr= new shape*[n];
	for(int i=0;i<n;i++)
	{
		int ch;
		cout<<"Moi ban chon hinh muon tao tri/rec/cir (1/2/3):";
		cin>>ch;
		switch(ch)
		{
			case 1:
				arr[i]= new triangle();
				arr[i]->nhap();
				break;
			case 2:
				arr[i]= new rectangle();
				arr[i]->nhap();
				break;
			case 3:
				arr[i]= new circle();
				arr[i]->nhap();
				break;
				
		}
	}
	cout<<"///////////////////////////"<<endl;
	for(int i=0;i<n;i++)
	{
		arr[i]->in();
	}
}
