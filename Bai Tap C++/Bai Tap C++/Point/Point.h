#ifndef Point_H
#define Point_H
class Point {
	int x,y;
public:
	void setValue(int x, int y);
	void Move(int x1, int y1);
	bool isZero();
	void Print();
};
#endif
