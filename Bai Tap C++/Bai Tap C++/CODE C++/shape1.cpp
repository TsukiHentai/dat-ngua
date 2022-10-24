#include <iostream>
#include <cstring> // for strcpy
#include <cmath> // for sqrt

using namespace std;

float contour(int x, int y);
float contour(int x, int y, int z);

class Shape
{
	protected:
		char name[20];
	public:
		Shape(char name1[20]="")
		{
			strcpy(name,name1);
		}
		~Shape(){}
		virtual float contour()const = 0; // khai bao ham area la ham ao, ham rong
		virtual void draw()const = 0; // pure abstract function
};

class Line:public Shape
{
	protected:
		float x1, x2, y1, y2;
	public:
		Line(char name1[20], float x11, float y11, float x21, float y21):Shape(name1)
		{
			x1 = x11;
			y1 = y11;
			x2 = x21;
			y2 = y21;
		}
		~Line(){
		}
		float contour()const
		{
			float dx = x1-x2;
			float dy = y1-y2;
			return sqrt(dx*dx+dy*dy);
		}
		void draw()const
		{
			cout << name << endl;
			cout << "("<<x1<<","<<y1<<")->" << "("<<x2<<","<<y2<<")";
		}
};

class Triangle:public Line
{
	float x3, y3;
	public:
		Triangle(char name1[20], float x11, float y11, float x21, float y21, float x31, float y31)
		:Line(name1, x11, y11, x21, y21)
		{
			x3 = x31;
			y3 = y31;
		}
		~Triangle()
		{
		}
		float contour()const
		{
			float dx1 = x1-x2;
			float dy1 = y1-y2;
			float dx2 = x2-x3;
			float dy2 = y2-y3;
			float dx3 = x3-x1;
			float dy3 = y3-y1;
			return sqrt(dx1*dx1+dy1*dy1) + sqrt(dx2*dx2+dy2*dy2) + sqrt(dx3*dx3+dy3*dy3);
		}
		void draw()const
		{
			cout << name << endl;
			cout << "("<<x1<<","<<y1<<")->" << "("<<x2<<","<<y2<<")" << endl;
			cout << "("<<x1<<","<<y1<<")->" << "("<<x3<<","<<y3<<")" << endl;
			cout << "("<<x2<<","<<y2<<")->" << "("<<x3<<","<<y3<<")";
		}
};
int main()
{
	Shape * obj1[2];
	obj1[0] = new Line("Line", 0, 0, 3, 4);
	cout << "Length:" << obj1[0]->contour() << endl;
	obj1[0]->draw();
	cout << endl;
	obj1[1] = new Triangle("Triangle", 0, 0, 3, 4, 1, 1);
	cout << "Contour length:" << obj1[1]->contour() << endl;
	obj1[1]->draw();
	return 0;
}
