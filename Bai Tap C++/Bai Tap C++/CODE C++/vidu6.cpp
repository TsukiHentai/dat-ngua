#include <iostream>
#include <algorithm>

using namespace std;
class Shape
{
	public:
		int type;
		int w, h, r;
		Shape(int type1=0, int w1=0, int h1=0, int r1=0):type(type1)
		{
			w = w1;
			h = h1;
			r = r1;
		}
		int minval()const // min value of width and height
		{
			if(w<h)
				return w;
			return h;
		}
		int maxval()const
		{
			if(w>h)
				return w;
			return h;
		}
		bool operator < (const Shape & s)const
		{
			if(type==s.type)
			{
				if(type==0)
					return (s.r>r);
				if(type==1)
					return ((s.minval()>maxval()) || (s.maxval()>maxval()&&s.minval()>minval()));
			}else
			{
				if(type==0)
					return (2*r<s.minval());
				else
					return ((w*w + h*h) < 4*s.r*s.r);
			}
		}
		friend ostream & operator << (ostream & os, Shape & r)
		{
			if(r.type==0)
				os << r.r;
			else
				os << r.w << " " << r.h;
			return os;
		}
};



int main()
{
	Shape shapes[200];
	int dp[200];
	int tests;
	int R, C, n;
	cin >> tests;
	int i, j;
	while(tests--)
	{
		cin >> R;
		int w, h, r;
		for(i=0;i<R;i++)
		{
			cin >> w >> h;
			shapes[i].type = 1;
			shapes[i].w=w;
			shapes[i].h=h;
			shapes[i].r= 0;
		}
		cin >> C;
		n = R+C;
		for(i=0;i<C;i++)
		{
			cin >> r;
			shapes[i+R].type = 0;
			shapes[i+R].r=r;
			shapes[i+R].w=0;
			shapes[i+R].h=0;
		}
		//for(i=0;i<n;i++)
			//cout << shapes[i] << endl;
			
		// now sorting
		std::sort(shapes, shapes + n);
		/*
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				if(shapes[j]<shapes[i])
				{
					Shape temp = shapes[i];
					shapes[i] = shapes[j];
					shapes[j] = temp;
				}
		*/
		//for(i=0;i<n;i++)
			//cout << shapes[i] << endl;
		dp[0] = 1;
		
		for(i=1;i<n;i++)
		{
			int temp = 1;
			for(j=i-1;j>=0;j--)
				if(shapes[j]<shapes[i])
					if(dp[j]+1>temp)
						temp = dp[j] + 1;
			dp[i] = temp;
		}
		cout << dp[n-1] << endl;
	}
	return 0;
}

