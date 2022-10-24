#include "D:\BT_CPP\Stack_H.h"
#include <iostream>
using namespace std;
//---------------------------------------------//
Stack::Stack(int MaxStackSize) {
   maxTop = MaxStackSize - 1;
   stack = new int[MaxStackSize];
   top = -1;
}
//---------------------------------------------//
int Stack::Top() const {
	if (IsEmpty()) {
		cout << "Out of bound";
		return -1;
	}
	else 
		return stack[top];
}
//---------------------------------------------//
void Stack::Push(const int & x) {
   if (IsFull()) {
   		cout << "No mem";
		return;
   }
   else
   		stack[++top] = x;
}
//---------------------------------------------//
int Stack::Pop() {
   if (IsEmpty()) {
   		cout << "Out of bound";
		return -1;
   }
   else
   		return stack[top--];
}
//---------------------------------------------//
int main()  {
	char hex[16] = {'0','1','2','3','4','5','6','7','8','9',
					'A','B','C','D','E','F'};
	Stack S;
	int n, heso, r;
	
	cout << "Nhap vao so can doi: ";
	cin >> n;
	cout << "Nhap vao he so: ";
	cin >> heso;
	
	while (n != 0 ) {
	   	r = n % heso;
	   	S.Push(r);
	   	n = n / heso;
	}
	
	cout << "So doi la: ";
	while (!S.IsEmpty()){
		cout << hex[S.Pop()];
	}
	return 0;
}
